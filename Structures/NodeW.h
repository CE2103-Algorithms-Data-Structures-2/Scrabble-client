//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NODE_H
#define PROYECTO_1_CLIENT_NODE_H

#include <string>
#include "../Interface_Logic/Board_Logic/Chip.h"

using namespace std;
class NodeW {
private:
    NodeW* next;
    Chip* ficha;
public:
    NodeW(Chip* c);
    Chip* getChip();
    NodeW* getNext();
    void setNext(NodeW* n);
    void setChip(Chip* c);
};


#endif //PROYECTO_1_CLIENT_NODE_H
