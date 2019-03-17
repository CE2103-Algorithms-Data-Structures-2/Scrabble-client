//
// Created by dcamachog1501 on 09/03/19.
//
#ifndef PROYECTO_1_CLIENT_MANAGER_H
#define PROYECTO_1_CLIENT_MANAGER_H


#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"
#include "../Logic_Windows/NewGame_LW.h"
#include "../Logic_Windows/JoinGame_LW.h"


class Manager{
private:
    Client* cliente;
    JSONManager* Jmanager;
    NewGame_LW* NewG_LW;
    JoinGame_LW* JoinG_LW;
    bool* running;
public:
    Manager();
    void Init();
};


#endif //PROYECTO_1_CLIENT_MANAGER_H
