//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_PLAYER_H
#define PROYECTO_1_CLIENT_PLAYER_H


#include "../../Structures/LinkedList.h"

class Player {
    private:
        string name;
        int points;
        LinkedList chips;
        bool turn;
    public:
        int getPoints();
        string getChips();
        LinkedList getChips();



};


#endif //PROYECTO_1_CLIENT_PLAYER_H
