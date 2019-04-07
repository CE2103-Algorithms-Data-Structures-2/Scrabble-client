//
// Created by dcamachog1501 on 15/03/19.
//

#ifndef PROYECTO_1_CLIENT_NODEP_H
#define PROYECTO_1_CLIENT_NODEP_H


#include "../Interface_Logic/Player/Player.h"

class NodeP {
private:
    Player* jugador;
    NodeP* next;
public:
    /**
     * Constructor de la clase NodeP.
     */
    NodeP();
    /**
     * Constructor de la clase NodeP.
     * @param p Objeto de tipo Player.
     */
    NodeP(Player* p);
    /**
     * Metodo para obtener el puntero al nodo siguiente.
     * @return NodeP* Puntero al siguiente nodo de tipo NodeP*
     */
    NodeP* getNext();
    /**
     * Metodo para establecer el puntero hacia el sigiente nodo de tipo NodeP.
     * @param p Puntero de tipo NodeP.
     */
    void setNext(NodeP* p);
    /**
     * Metodo para obtener el objeto de tipo Player almacenado en el nodo.
     * @return
     */
    Player* getValue();

};


#endif //PROYECTO_1_CLIENT_NODEP_H
