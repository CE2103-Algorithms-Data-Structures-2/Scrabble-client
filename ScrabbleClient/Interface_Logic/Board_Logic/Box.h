//
// Created by dcamachog1501 on 15/03/19.
//

#ifndef PROYECTO_1_CLIENT_BOX_H
#define PROYECTO_1_CLIENT_BOX_H

#include <string>
#include "Chip.h"

using namespace std;

class Box {
    private:
        int columna;
        int fila;
        string perk;
        Chip* ficha;
        Box* next;
        Box* prev;
    public:
        /**
         * Construtor de la clase box.
         * @param c Columna de tipo entero.
         * @param f Fila de tipo entero.
         * @param p Perk de tipo string.
         * @param l Letra de tipo string.
         */
        Box(int c,int f,string p,Chip *l);
        /**
         * Constructor de la clase Box.
         */
        Box(int c,int f);
        Box();
        /**
         * Metodo para obtener la ficha de la casilla.
         * @return Ficha de tipo Chip
         */
        Chip* getChip();
        /**
         * Metodo para obtener la columna asociada a la casilla.
         * @return Columna de tipo entero.
         */
        int getColumn();
        /**
         * Metodo para obtener la fila asociada a la casilla.
         * @return Fila de tipo entero.
         */
        int getLine();
        /**
         * Metodo para obtner el multiplicador de la casilla.
         * @return Perk de tipo string.
         */
        string getPerk();
        /**
         * Metodo para establecer la fila de la casilla.
         * @param Fila de tipo entero.
         */
        void setLine(int l);
        /**
         * Metodo par establecer la columna de la casilla.
         * @param c Columna de tipo entero.
         */
        void setColumn(int c);
        /**
         * Metodo para establecer el perk de la casilla.
         * @param p Perk de tipo string.
         */
        void setPerk(string p);
        /**
         * Metodo para establecer la letra de la casilla.
         * @param l Letra de tipo string
         */
        void setChip(Chip* c);
        /**
         * Metodo para obtener el siguiente valor en la fila.
         * @return Puntero de tipo Box.
         */
        Box* getNext();
        /**
         * Metodo para obtener el valor prervio en la fila.
         * @return Puntero de tipo Box.
         */
        Box* getPrev();
        /**
         * Método para establecer la siguiente casilla de la fila.
         * @param b Puntero de Box.
         */
        void setNext(Box* b);
        /**
         * Metod para establecer la caasilla previa de la fila.
         * @param b Puntero de tipo Box.
         */
        void setPrev(Box* b);
        /**
         * Metodo para estaablecer ambas coordenadas de la casilla
         * @param f Fila de tipo entero.
         * @param c Columna dde tipo entero.
         */
        void setCoords(int f,int c);


};

#endif //PROYECTO_1_CLIENT_BOX_H
