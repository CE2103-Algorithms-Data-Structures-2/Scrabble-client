//
// Created by dcamachog1501 on 09/03/19.
//

#ifndef PROYECTO_1_CLIENT_MANAGER_H
#define PROYECTO_1_CLIENT_MANAGER_H


#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"
#include "../Logic_Windows/NewGame_W.h"


class Manager{
private:
    Client cliente;
    bool running;
    JSONManager Jmanager;
    NewGame_W NewG_W;
public:
    Manager();
    void Init();
    void sendtoServer(string s);
    string getfromServer();
    JSONManager getJmanager();

};


#endif //PROYECTO_1_CLIENT_MANAGER_H
