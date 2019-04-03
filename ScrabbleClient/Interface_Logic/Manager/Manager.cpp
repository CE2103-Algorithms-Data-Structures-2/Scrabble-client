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
void Manager::play()
{
    ask("getRandom");
    ask("ready");
    ask("getSequence");
    ask("seven");
    while(playing)
    {
        cliente->sendMessage("myTurn");
        string incoming=cliente->receiveMessage();
        if(incoming.compare("true")==0)
        {
            Matrix temp= *matrix;
            writeToMatrix();
            incoming=cliente->receiveMessage();
            if(incoming.compare("false")==0)
            {
                *matrix=temp;
            }
            matrix->print();
        }
        cliente->sendMessage("update");
        incoming=cliente->receiveMessage();
        if(incoming.compare("true")==0)
        {
            cliente->sendMessage("newMat");
            incoming=cliente->receiveMessage();
            Matrix m=Jmanager->JSONtomatrix(incoming);
            *matrix=m;
            cout<<"Matriz recibida del servidor: \n"<<endl;
            matrix->print();
        }
        usleep(5000000);
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
    else if(p.compare("myTurn")==0)
    {

    }
}

void Manager::writeToMatrix()
{
    cout<<"Mano del jugador: "<<endl;
    localP->getChips()->print();
    WordsList w = WordsList();
    string storage = "";
    string fila = "";
    string columna = "";
    string dir="";
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
    if(localP->getChips()->writeAble(w))
    {
        cout << "Fila: " << endl;
        getline(cin, fila);
        cout << "Columna: " << endl;
        getline(cin, columna);
        cout<<"Direccion: "<<endl;
        getline(cin,dir);
        matrix->addWord(stoi(fila),stoi(columna),dir,w);
        string JSON=Jmanager->matrixtoJSON(matrix);
        cliente->sendMessage(JSON);
    }
}



