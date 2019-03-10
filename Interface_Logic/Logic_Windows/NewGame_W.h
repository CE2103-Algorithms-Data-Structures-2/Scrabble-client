//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NEWGAME_W_H
#define PROYECTO_1_CLIENT_NEWGAME_W_H


#include "../Manager/Manager.h"

class NewGame_W
        {
        private:
            Manager* man;
        public:
            NewGame_W(Manager* m);
            void newGame();
            string getInfo();
};


#endif //PROYECTO_1_CLIENT_NEWGAME_W_H
