//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NEWGAME_W_H
#define PROYECTO_1_CLIENT_NEWGAME_W_H

#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"

class NewGame_W
        {
        private:
            Client* cliente;
            JSONManager* Jmanager;
        public:
            NewGame_W(Client* c,JSONManager* j);
            void newGame();
            string getInfo();
};


#endif //PROYECTO_1_CLIENT_NEWGAME_W_H
