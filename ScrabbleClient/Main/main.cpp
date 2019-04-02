#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "../Client/Client.h"
#include "../Interface_Logic/Manager/Manager.h"
#include "../Interface_Logic/JSON_Logic/JSONManager.h"
#include "../Interface_Logic/Board_Logic/Matrix.h"


PlayerList* Manager::players= new PlayerList();
Player* Manager:: localP=new Player();
Manager* MainWindow::Wmanager=new Manager();

#define getName(var)  #var

int main(int argc, char *argv[]) {


    QApplication a(argc, argv);
    MainWindow w;
    w.show();




   /* Matrix *m = new Matrix();
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
        WordsList *w = new WordsList();
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
            w->add(c);
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
            //string json=jmanager->matrixtoJSON(m);
        }
    }*/
    return a.exec();
}

