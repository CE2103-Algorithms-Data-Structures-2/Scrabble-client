//
// Created by dcamachog1501 on 09/03/19.
//
#include"../Client/Client.h"
#include "Manager.h"
#include <thread>
using namespace std;

Manager::Manager()
{
    this->cliente=Client();
    this->running=true;
    Init();
    //thread managerT=thread(&Manager::Init,this);
    //managerT.join();

};
void Manager::Init()
{
    cliente.run();
    while(running)
    {
        if(cliente.isConnected())
        {
            string message;
            getline(cin,message);
            cliente.sendMessage(message);
            cliente.receiveMessage();
        }
    }
}