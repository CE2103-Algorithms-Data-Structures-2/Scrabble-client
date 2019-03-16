//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_LOGICWINDOW_H
#define PROYECTO_1_CLIENT_LOGICWINDOW_H


#include "../JSON_Logic/JSONManager.h"
#include "../../Client/Client.h"

class LogicWindow {
    protected:
        Client* cliente;
        JSONManager* Jmanager;
    public:
        LogicWindow(Client* c,JSONManager* j);
        string getInfo();
};


#endif //PROYECTO_1_CLIENT_LOGICWINDOW_H
