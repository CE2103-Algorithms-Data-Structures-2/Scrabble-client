//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_PLAYER_H
#define PROYECTO_1_CLIENT_PLAYER_H


#include "Structures/WordsList.h"
#include <string>

using namespace std;

class Player {
private:
    string name;
    string ID;
    int* points;
    WordsList* chips;
    Chip* rndChip;
    bool* turn;
public:
    Player();
    /**
    * Constructor de la clase Player.
    * @param name Nombre del jugador de tipo string
    */
    Player(string name);
    /**
     * Metodo para obtener los puntos acumulados por el jugador.
     * @return Puntaje de tipo entero.
     */
    int* getPoints();
    /**
     * Metodo para obtner la lista de fichas que tiene un jugador.
     * @return Fichas de tipo LinkedList.
     */
    WordsList* getChips();
    /**
     * Metodo para obtener el nombre del jugador.
     * @return Nombre de tipo string.
     */
    string getName();
    /**
     * Metodo para cambiar el estado del turno dl jugador.
     */
    void setTurn();
    /**
     * Metodo para establecer el ID del jugador.
     * @param i ID de tipo entero.
     */
    void setID(string i);
    /**
     * Metodo para establecer el nombre del jugador.
     * @param n Nombre dde tipo string.
     */
    void setName(string n);
    /**
     * Metodo para obtener el ID del jugador.
     * @return ID de tipo string.
     */
    string getID();
    /**
     * Metodo para imprimir en consola los datos del jugador.
     */
    void print();
    void setRnd(Chip* c);
};


#endif //PROYECTO_1_CLIENT_PLAYER_H
