//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NEWGAME_W_H
#define PROYECTO_1_CLIENT_NEWGAME_W_H

#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"
#include "LogicWindow.h"

class NewGame_LW:public LogicWindow
{
public:
    NewGame_LW(Client* c,JSONManager* j):LogicWindow(c, j)
    {

        cliente=c;
        Jmanager=j;

    }
    void newGame();
    string getInfo();
};


#endif //PROYECTO_1_CLIENT_NEWGAME_W_H
