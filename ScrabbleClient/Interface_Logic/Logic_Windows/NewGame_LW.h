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
            /**
            * Constructor de la clase NewGame_LW.
            * @param c Puntero de tipo Client.
            * @param j Puntero de tipo JSONManager.
            */
            NewGame_LW(Client* c,JSONManager* j):LogicWindow(c, j)
            {

                    cliente=c;
                    Jmanager=j;

            }
            /**
             * Metodo para crear un juego nuevo en el servidor.
             */
            void newGame(string name,string partida,string jugadores);
};


#endif //PROYECTO_1_CLIENT_NEWGAME_W_H
