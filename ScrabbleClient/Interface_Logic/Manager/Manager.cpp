//
// Created by dcamachog1501 on 09/03/19.
//
#include"../../Client/Client.h"
#include "Manager.h"
#include "../JSON_Logic/JSONManager.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <algorithm>
#include <thread>
#include "mainwindow.h"

using namespace std;
using boost::property_tree::ptree;

Manager::Manager()
{
    code=new string("");
    matrix=new Matrix();
    assigned=false;
    playing=new bool(true);
    cliente=new Client();
    running=new bool(true);
    first= new bool(true);
    Jmanager=new JSONManager();
    NewG_LW=new NewGame_LW(cliente,Jmanager);
    JoinG_LW=new JoinGame_LW(cliente,Jmanager);

    Init();


};
void Manager::Init()
{
    cliente->run();
    matrix->init();

}
void Manager::play() {
    ask("getRandom");
    ask("ready");
    ask("getSequence");
    ask("seven");
    cliente->sendMessage("done");
    ask("coordinate");
    while (playing) {

        cliente->sendMessage("myTurn");
        string incoming = cliente->receiveMessage();
        if (incoming.compare("true") == 0) {
            matrix->print();
            while (true) {
                Matrix *temp = new Matrix();
                *temp = matrix->copy();
                WordsList w = writeToMatrix();
                incoming = cliente->receiveMessage();
                if (incoming.compare("false") == 0) {
                    *matrix = *temp;
                    cliente->sendMessage("send");
                    incoming = cliente->receiveMessage();
                    cout << "ERROR: La palabra " + incoming + " no es valida!Vuelva a intentar\n";
                    cliente->sendMessage("myTurn");
                    incoming = cliente->receiveMessage();

                } else if (incoming.compare("true") == 0) {
                    cliente->sendMessage("send");
                    incoming = cliente->receiveMessage();
                    cout << "Puntos obtenidos: " + incoming +"\n"<< endl;
                    this->localP->addPoints(stoi(incoming));
                    cout<<"Puntos totales del jugador: "+to_string(*localP->getPoints())+"\n"<<endl;
                    this->localP->getChips()->removeSetOfLetters(w);
                    cliente->sendMessage("refill");
                    incoming = cliente->receiveMessage();
                    if (incoming.compare("send") == 0) {
                        cout << "Fichas faltantes: " + to_string(7 - localP->getChips()->getLength()) + "\n" << endl;
                        cliente->sendMessage(to_string(7 - localP->getChips()->getLength()));
                        incoming = cliente->receiveMessage();
                        int faltantes = 7 - localP->getChips()->getLength();
                        for (int i = 0; i < faltantes; i++) {
                            Chip *c = new Chip();
                            string JSON = Manager::Jmanager->askFor(incoming, to_string(i));
                            c->setPoints(stoi(Manager::Jmanager->askFor(JSON, "points")));
                            c->setLetter(Manager::Jmanager->askFor(JSON, "letter"));
                            if (Manager::Jmanager->askFor(JSON, "wildcard").compare("true") == 0) {
                                c->setSpecial(true);
                            } else if (Manager::Jmanager->askFor(JSON, "wildcard").compare("false") == 0) {
                                c->setSpecial(false);
                            }
                            localP->getChips()->add(c);
                        }
                        cout<<"----Mano del jugador----\n"<<endl;
                        localP->getChips()->print();
                        cliente->sendMessage("remaining");
                        incoming=cliente->receiveMessage();
                        cout<<"Fichas restantes en el servidor: "<<"["+incoming+"]\n"<<endl;
                        cout<<"Turno del siguiente jugador!\n"<<endl;
                    }
                    break;
                }
            }
        }
        *first=false;
        cliente->sendMessage("update");
        incoming = cliente->receiveMessage();
        Matrix m = Jmanager->JSONtomatrix(incoming);
        *matrix = m;
        usleep(2000000);
    }
}

void Manager::setCode(string s) {
    if(!assigned)
    {
        *code=s;
        assigned=true;
        cout<<"Assigned code: "<<*code<<endl;
    }

}
void Manager::newGame(string name, string partida,string jugadores)
{
    bool tr= true;
    while(running)
    {
        if(cliente->isConnected())
        {

            if(tr)
            {
                cliente->isAccepted();
                this->NewG_LW->newGame(name,partida,jugadores);
                players->print();
                this->setCode(cliente->receiveMessage());
                ask("numP");
                play();
                tr=false;

            }

        }
    }
}
void Manager::newJoin(string name,string code)
{
    bool tr= true;
    while(running)
    {
        if(cliente->isConnected())
        {

            if(tr)
            {
                cliente->isAccepted();
                bool accepted=this->JoinG_LW->join(name,code);
                if(!accepted)
                {
                    cliente->disconnect();
                }
                ask("numP");
                play();
                tr=false;

            }

        }
    }
}
void Manager::ask(string p) {
    if (p.compare("numP") == 0) {
        int counter = 0;
        while (counter <= players->getLimit() - 1) {
            cliente->sendMessage("numP");
            string m = cliente->receiveMessage();
            int n = 0;
            try {
                n = stoi(m);
            }
            catch (int e) {
                n = 0;
            }
            if (n > counter) {
                cout << "Numero de jugadores en el server: " << m << endl;
                cliente->sendMessage("askFor");
                if ((cliente->receiveMessage().compare("send")) == 0) {
                    cliente->sendMessage(to_string(counter));
                    string entrante = cliente->receiveMessage();
                    Player *p = new Player();
                    p->setName(Jmanager->askFor(entrante, string("name")));
                    p->setID(Jmanager->askFor(entrante, string("ID")));
                    players->add(p);
                    counter++;

                }
            }
            usleep(1500000);
        }
        cout << "Tope alcanzado" << endl;
        players->print();
    }
    else if (p.compare("getRandom") == 0)
    {
        cliente->sendMessage("getRandom");
        string incoming = cliente->receiveMessage();
        if (incoming.compare("send") == 0) {
            cliente->sendMessage("rnd");
            incoming = cliente->receiveMessage();
            Chip *c = new Chip();
            c->setPoints(stoi(Manager::Jmanager->askFor(incoming, "points")));
            c->setLetter(Manager::Jmanager->askFor(incoming, "letter"));
            if (Manager::Jmanager->askFor(incoming, "wildcard").compare("true") == 0) {
                c->setSpecial(true);
            } else if (Manager::Jmanager->askFor(incoming, "wildcard").compare("false") == 0) {
                c->setSpecial(false);
            }
            Manager::localP->setRnd(c);
            Manager::localP->print();
        }
    }
    else if (p.compare("ready") == 0)
    {
        while (true) {
            cliente->sendMessage("ready");
            string incoming = cliente->receiveMessage();
            if (incoming.compare("true") == 0) {
                break;
            }
            usleep(1500000);
        }
        cout << " " << endl;
        cout << "------------------------------------" << endl;
        cout << "Todos los jugadores están listos!" << endl;
        cout << "------------------------------------" << endl;
    } else if (p.compare("seven") == 0) {
        cliente->sendMessage("getRandom");
        string incoming = cliente->receiveMessage();
        if (incoming.compare("send") == 0) {
            cliente->sendMessage("seven");
            incoming = cliente->receiveMessage();
            for (int i = 0; i < 7; i++) {
                Chip *c = new Chip();
                string JSON = Manager::Jmanager->askFor(incoming, to_string(i));
                c->setPoints(stoi(Manager::Jmanager->askFor(JSON, "points")));
                c->setLetter(Manager::Jmanager->askFor(JSON, "letter"));
                if (Manager::Jmanager->askFor(JSON, "wildcard").compare("true") == 0) {
                    c->setSpecial(true);
                } else if (Manager::Jmanager->askFor(JSON, "wildcard").compare("false") == 0) {
                    c->setSpecial(false);
                }
                localP->getChips()->add(c);
            }
        }

        cout << " " << endl;
        cout << "--------------------" << endl;
        cout << " Fichas obtenidas: " << endl;
        cout << " " << endl;
        localP->getChips()->print();
        cout << "--------------------" << endl;
    }
    else if(p.compare("getSequence")==0)
    {
        cliente->sendMessage("getSequence");
        string incomming =cliente->receiveMessage();
        int l=players->getLength();
        Manager::players->purge();
        for(int i=0;i<l;i++)
        {
            string jug= Jmanager->askFor(incomming,"player"+to_string(i));
            Player* p= new Player();
            p->setName(Jmanager->askFor(jug,"name"));
            p->setID(Jmanager->askFor(jug,"index"));
            Chip* c= new Chip();
            string ficha=Jmanager->askFor(jug,"rnd");
            c->setLetter(Jmanager->askFor(ficha,"letter"));
            c->setPoints(stoi(Jmanager->askFor(ficha,"point")));
            if (Manager::Jmanager->askFor(ficha, "wildcard").compare("true") == 0) {
                c->setSpecial(true);
            } else if (Manager::Jmanager->askFor(ficha, "wildcard").compare("false") == 0) {
                c->setSpecial(false);
            }
            p->setRnd(c);
            players->add(p);

        }
        NodeP* temp=players->getHead();
        while(temp!= nullptr)
        {
            cout<<"-------------------------------------"<<endl;
            cout<<"Nombre del jugador: "+temp->getValue()->getName()<<endl;
            cout<<"ID del jugador: "+temp->getValue()->getID()<<endl;
            cout<<"Ficha rnd: "+temp->getValue()->getRnd()->getLetter();
            cout<<"-------------------------------------"<<endl;
            cout<<" "<<endl;
            temp=temp->getNext();
        }
        cout<<"Jugador local: "<<endl;
        cout<<""<<endl;
        cliente->sendMessage("getLocal");
        incomming=cliente->receiveMessage();
        localP= players->get(stoi(incomming));
        localP->print();

    }
    else if(p.compare("coordinate")==0)
    {
        while (true) {
            cliente->sendMessage("coordinate");
            string incoming = cliente->receiveMessage();
            if (incoming.compare("true") == 0) {
                break;
            }
            usleep(1500000);
        }
        cout << " " << endl;
        cout << "------------------------------------" << endl;
        cout << "Todos los jugadores están listos!" << endl;
        cout << "------------------------------------\n" << endl;


    }
}

WordsList Manager::writeToMatrix()
{
    cout<<"Mano del jugador: "<<endl;
    localP->getChips()->print();
    string storage = "";
    string fila = "";
    string columna = "";
    string dir="";
    while(true)
    {
        WordsList w = WordsList();
        cout << "Ingrese una palabra: ";
        getline(cin, storage);
        for (int i = 0; i < storage.size(); i++) {
            Chip *c = new Chip();
            char s = storage[i];
            std::string u = "";
            u += s;
            c->setLetter(u);
            w.add(c);
        }
        if (localP->getChips()->writeAble(w)) {
            cout << "Fila: " << endl;
            getline(cin, fila);
            cout << "Columna: " << endl;
            getline(cin, columna);
            cout << "Direccion: " << endl;
            getline(cin, dir);
            Matrix *temp = new Matrix();
            *temp = matrix->copy();
            if (*first) {

                matrix->addWord(stoi(fila), stoi(columna), dir, w);
                if (!matrix->isCentered()) {
                    cout << "Debe poner al menos una letra sobre el centro del tablero!\n";
                    *matrix = *temp;
                    matrix->print();
                    localP->getChips()->print();
                } else {
                    matrix->addWord(stoi(fila), stoi(columna), dir, w);
                    string JSON = Jmanager->matrixtoJSON(matrix);
                    if((dir=="R"&&stoi(columna)<15)||(dir=="D"&&stoi(fila)<15))
                    {
                        cliente->sendMessage("newMatrix");
                        string incoming = cliente->receiveMessage();
                        if (incoming.compare("send") == 0) {
                            cliente->sendMessage(JSON);
                            string incomming = cliente->receiveMessage();
                            if (incomming.compare("send") == 0) {
                                string entry =
                                        "Fini@" + to_string(w.getFinicial()) + "$" + "Cini@" +
                                        to_string(w.getCinicial()) +
                                        "$" +
                                        "Ffin@" + to_string(w.getFfinal()) + "$" + "Cfin@" + to_string(w.getCfinal());

                                cout << "Inicio de la palabra: " << "(" << to_string(w.getFinicial()) << ","
                                     << to_string(w.getCinicial()) << ")\n" << endl;
                                cout << "Final de la palabra: " << "(" << to_string(w.getFfinal()) << ","
                                     << to_string(w.getCfinal()) << ")\n" << endl;
                                string JSON = Jmanager->toJSON(entry);
                                cliente->sendMessage(JSON);
                            }
                            *first = false;
                            return w;
                        }
                    }
                    else
                    {
                        cout << "La palabra se sale del tablero!\n";
                        *matrix = *temp;
                        matrix->print();
                    }
                }
            }
            else
            {
                w.setInicio(stoi(fila),stoi(columna));
                if(dir.compare("R")==0)
                {
                    w.setFinal(w.getFinicial(),w.getCinicial()+w.getLength()-1);
                }
                else
                {
                    w.setFinal(w.getFinicial()+w.getLength()-1,w.getCinicial());
                }
                matrix->addWord(stoi(fila), stoi(columna), dir, w);
                if (matrix->adjacencyAnalisys(stoi(fila), stoi(columna), w.getFfinal(), w.getCfinal()))
                {
                    string JSON = Jmanager->matrixtoJSON(matrix);
                    cliente->sendMessage("newMatrix");
                    string incoming = cliente->receiveMessage();
                    if (incoming.compare("send") == 0)
                    {
                        cliente->sendMessage(JSON);
                        string incomming = cliente->receiveMessage();
                        if (incomming.compare("send") == 0)
                        {
                            string entry =
                                    "Fini@" + to_string(w.getFinicial()) + "$" + "Cini@" + to_string(w.getCinicial()) +
                                    "$" +
                                    "Ffin@" + to_string(w.getFfinal()) + "$" + "Cfin@" + to_string(w.getCfinal());
                            cout<<"Inicio de la palabra: "<<"("<<to_string(w.getFinicial())<<","<<to_string(w.getCinicial())<<")\n"<<endl;
                            cout<<"Final de la palabra: "<<"("<<to_string(w.getFfinal())<<","<<to_string(w.getCfinal())<<")\n"<<endl;
                            string JSON = Jmanager->toJSON(entry);
                            cliente->sendMessage(JSON);
                        }
                        return w;
                    }
                }
                else
                {
                    cout<<"La palabra ingresada no puede estar separada de las demas palabras ya ingresadas!"<<endl;
                    *matrix=*temp;
                    matrix->print();
                }
            }
        }   }
}



