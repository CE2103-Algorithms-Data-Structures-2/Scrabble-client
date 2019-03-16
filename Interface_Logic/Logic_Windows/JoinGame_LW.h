//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_JOINGAME_LW_H
#define PROYECTO_1_CLIENT_JOINGAME_LW_H


#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"
#include "LogicWindow.h"

class JoinGame_LW: public LogicWindow
        {
    public:
        JoinGame_LW(Client* c,JSONManager* j):LogicWindow(c,j)
        {
                cliente=c;
                Jmanager=j;
        }
        string getInfo();
        bool join();


};


#endif //PROYECTO_1_CLIENT_JOINGAME_LW_H
