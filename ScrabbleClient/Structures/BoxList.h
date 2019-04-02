//
// Created by dcamachog1501 on 25/03/19.
//

#ifndef PROYECTO_1_CLIENT_BOXLIST_H
#define PROYECTO_1_CLIENT_BOXLIST_H


#include "../Interface_Logic/Board_Logic/Box.h"

class BoxList {
    private:
        Box* head;
        int length;
        BoxList* next;
        BoxList* prev;
    public:
        /**
        * Constructor de la clase BoxList.
        */
        BoxList();
        /**
         * Metodo para obtener la longitud de la lista.
         * @return Longtud de tipo entero.
         */
        int getLength();
        /**
         * Metodo para obtener la siguiente lista de casillas.
         * @return Puntero de tipo BoxList.
         */
        BoxList* getNext();
        /**
         * Metodo para obtener la lista anterior a la actual.
         * @return Puntero de tipo BoxList.
         */
        BoxList*getPrev();
        /**
         * Metodo para establecer la siguiente lista de casillas.
         * @param b Puntero de tipo BoxList.
         */
        void setNext(BoxList* b);
        /**
         * Metodo para establecer la lista de casillas previa a la actual
         * @param b Puntero de tipo BoxList.
         */
        void setPrev(BoxList*b);
        /**
         * Metodo para añadir una ficha en la posicion indicada.
         * @param f Fila de tipo entero.
         * @param col Columna de tipo entero.
         * @param c Puntero de tipo Chip.
         */
        void add(int f,int col,Chip* c);
        /**
         * Metodo para imprimir la lista en consola.
         */
        void print();
        /**
         * Metodo para llenar la lista con 15 casillas vacias.
         */
        void fill15(int f);
        /**
         * Metodo para obtener la cabeza de la lista.
         * @return Puntero de tipo Box.
         */
        Box* getHead();

};


#endif //PROYECTO_1_CLIENT_BOXLIST_H
