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
using namespace std;
using boost::property_tree::ptree;

Manager::Manager()
{
    code=new string("");
    assigned=new bool(false);
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
    bool tr= true;
    while(running)
    {
        if(cliente->isConnected())
        {

            if(tr)
            {
                this->NewG_LW->newGame();
                players->print();
                this->setCode(cliente->receiveMessage());
                ask();
                /*bool accepted=this->JoinG_LW->join();
                if(!accepted)
                {
                    cliente->disconnect();
                }*/
                tr=false;
            }

        }
    }
}

void Manager::setCode(string s) {
    if(!*assigned)
    {
        *code=s;
        *assigned=true;
        cout<<"Assigned code: "<<*code<<endl;
    }

}
void Manager::ask() {
    int counter=1;
    while(counter<players->getLimit())
    {
        cliente->sendMessage("numP");
        string m=cliente->receiveMessage();
        int n=0;
        try
        {
            n=stoi(m);
        }
        catch(int e)
        {
            n=0;
        }
        if(n>counter)
        {
            cout<<"Numero de jugadores en el server: "<<m<<endl;
            cliente->sendMessage("askFor");
            if((cliente->receiveMessage().compare("send"))==0)
            {
                cliente->sendMessage(to_string(counter));
                string entrante=cliente->receiveMessage();
                Player* p= new Player();
                p->setName(Jmanager->askFor(entrante,string("name")));
                p->setID(Jmanager->askFor(entrante,string("ID")));
                players->add(p);
                counter++;

            }
        }
        usleep(5000000);
    }
    cout<<"Tope alcanzado"<<endl;
    players->print();

}
