//
// Created by dcamachog1501 on 15/03/19.
//

#ifndef PROYECTO_1_CLIENT_PLAYERLIST_H
#define PROYECTO_1_CLIENT_PLAYERLIST_H


#include "NodeP.h"

class PlayerList {
    private:
        int* length;
        NodeP* head;
        int* limit;
    public:
    /**
     * Constructor de la clase PlayList
     */
    PlayerList();
    /**
     * Metodo para obtener la longitud de la lista.
     * @return Longitud de tipo entero.
     */
    int getLength();
    /**
     * Metodo para obtener el puntero a la cabeza de la lista.
     * @return Puntero de tipo NodeP.
     */
    NodeP* getHead();
    /**
     * Metodo para agregar un jugador a la lista.
     * @param p Jugador de tipo Player.
     */
    bool add(Player* p);
    /**
     * Metodo para eliminar un jugador de la lista;
     * @param i ID de tipo entero.
     */
    void del(int i);
    /**
     * Metodo para obtener un jugador a partir de su ID;
     * @return Puntero de tipo Player.
     */
    Player* get(int i);
    /**
     * Metodo para obtener el limite de la lista.
     * @return Limite de tipo entero.
     */
    int getLimit();
    /**
     * Metodo para establecer el limite de tamaño de la lista.
     * @param i Limite de tipo entero.
     */
    void setLimit(int i);
    /**
     * Metodo para imprimir la lista.
     */
    void print();



};


#endif //PROYECTO_1_CLIENT_PLAYERLIST_H
