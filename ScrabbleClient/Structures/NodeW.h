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
    /**
     * Constructor de la clase NodeW.
     * @param c Puntero de tipo Chip.
     */
    NodeW(Chip* c);
    /**
     * Metodo para obtener la ficha almacenada en el nodo.
     * @return Puntero de tipo Chip.
     */
    Chip* getChip();
    /**
     * Metodo para obtener el nodo siguiente en la lista.
     * @return Puntero de tipo NodeW.
     */
    NodeW* getNext();
    /**
     * Metodo para establecer el puntero al nodo siguiente en la lista.
     * @param n Puntero de tipo NodeW.
     */
    void setNext(NodeW* n);
    /**
     * Metodo para asignar la ficha correspondiente a ese nodo.
     * @param c Puntero de tipo Chip.
     */
    void setChip(Chip* c);
};


#endif //PROYECTO_1_CLIENT_NODE_H
