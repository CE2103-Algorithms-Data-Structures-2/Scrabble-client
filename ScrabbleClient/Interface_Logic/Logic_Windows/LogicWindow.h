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
    /**
     * Constructor de la clase LogicWindow
     * @param c Puntero de tipo Client.
     * @param j Puntero de tipo JSONManager.
     */
    LogicWindow(Client* c,JSONManager* j);
};


#endif //PROYECTO_1_CLIENT_LOGICWINDOW_H
