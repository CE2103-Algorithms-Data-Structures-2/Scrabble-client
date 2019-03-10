//
// Created by dcamachog1501 on 09/03/19.
//
#include"../../Client/Client.h"
#include "Manager.h"
#include "../JSON_Logic/JSONManager.h"
#include <thread>
using namespace std;

Manager::Manager()
{
    this->Jmanager=JSONManager();
    this->cliente=Client();
    this->running=true;
    this->NewG_W=NewGame_W(this);
    Init();


};
void Manager::Init()
{
    cliente.run();
    bool tr= true;
    while(running)
    {
        if(cliente.isConnected())
        {

            if(tr)
            {
                this->NewG_W.newGame();
                tr=false;
            }

        }
    }
}
void Manager::sendtoServer(string s)
{
    this->cliente.sendMessage(s);
}
string Manager::getfromServer()
{
    return cliente.receiveMessage();
}
JSONManager Manager::getJmanager()
{
    return this->Jmanager;
}