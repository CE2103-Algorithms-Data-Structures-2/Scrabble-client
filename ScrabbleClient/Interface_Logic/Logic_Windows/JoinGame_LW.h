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
        /**
        * Constructor de la clase JoinGame_LW
        * @param c Puntero de tipo CLient.
        * @param j Puntero de tipo JSONManager.
        */
        JoinGame_LW(Client* c,JSONManager* j):LogicWindow(c,j)
        {
                cliente=c;
                Jmanager=j;
        }
        /**
         * Metodo para obtener la información registrada en la ventana por el usuario.
         * @return Información de tipo string.
         */
        string getInfo();
        /**
         * Método para solicitar unirse al servidor.
         * @return Condicion de tipo booleana.
         */
        bool join(string name,string code);


};


#endif //PROYECTO_1_CLIENT_JOINGAME_LW_H
