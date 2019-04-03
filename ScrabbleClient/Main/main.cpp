#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "../Client/Client.h"
#include "../Interface_Logic/Manager/Manager.h"
#include "../Interface_Logic/JSON_Logic/JSONManager.h"
#include "../Interface_Logic/Board_Logic/Matrix.h"


PlayerList* Manager::players= new PlayerList();
Player* Manager:: localP=new Player();
/*Manager* MainWindow::Wmanager=new Manager();*/

#define getName(var)  #var

int main(int argc, char *argv[]) {

   /* QApplication a(argc, argv);
    MainWindow w;
    w.show();*/


    /*Matrix *m = new Matrix();
    m->init();
    JSONManager* jmanager=new  JSONManager();
    WordsList* mano= new WordsList();
    string let="";
    while(let!="$")
    {
        cout<<"Ingrese una letra: "<<endl;
        getline(cin,let);
        if(let!="$")
        {
            Chip *c = new Chip();
            c->setLetter(let);
            mano->add(c);
        }
    }
    cout<<"Mano del jugador: "<<endl;
    mano->print();
    while(true)
    {
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
        if(mano->writeAble(w))
        {
            cout << "Fila: " << endl;
            getline(cin, fila);
            cout << "Columna: " << endl;
            getline(cin, columna);
            cout<<"Direccion: "<<endl;
            getline(cin,dir);
            m->addWord(stoi(fila),stoi(columna),dir,w);
            mano->removeSetOfLetters(w);
            cout<<"Nueva mano del jugador: \n"<<endl;
            mano->print();
            string json=jmanager->matrixtoJSON(m);
            cout<<""<<endl;
            cout<<"JSON convertido: \n"<<endl;
            jmanager->JSONtomatrix(json);

        }
    }*/
    //return a.exec();

    JSONManager* jsonManager= new JSONManager();
    Matrix* m= new Matrix();
    *m=jsonManager->JSONtomatrix("{\"f0\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f1\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f2\":\"0#0#0#0#0#c#a#s#a#0#0#0#0#0#0\",\"f3\":\"0#0#0#0#c#a#r#a#0#0#0#0#0#0#0\",\"f4\":\"0#0#0#0#0#r#o#p#a#0#0#0#0#0#0\",\"f5\":\"0#0#0#0#0#r#0#o#0#0#0#0#0#0#0\",\"f6\":\"0#0#0#0#0#o#0#0#0#0#0#0#0#0#0\",\"f7\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f8\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f9\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f10\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f11\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f12\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f13\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\",\"f14\":\"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0\"}");
    m->search(2,5,6,5);
    char c= 'Avion';
    string s;
    s.append(1,c);
    cout<<s<<endl;

    return 0;
}

