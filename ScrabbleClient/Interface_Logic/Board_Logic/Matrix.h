//
// Created by dcamachog1501 on 20/03/19.
//

#ifndef PROYECTO_1_CLIENT_MATRIX_H
#define PROYECTO_1_CLIENT_MATRIX_H


#include "../../Structures/WordsList.h"
#include "../../Structures/BoxList.h"
class WordsList;
class Matrix {
    private:
        BoxList* head;

    public:
        /**
         * Constructor de la clase Matrix.
         */
        Matrix();
        /**
         * Método par ainicializar la matríz en ceros.
         */
        void init();
        /**
         * Método para imprimir la matríz.
         */
        void print();
        /**
         * Metodo para añadir palabras a la matriz.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @param dir Dirección de tipo string.
         * @param list Puntero de tipo WordsList.
         */
        void addWord(int f,int c,string dir,WordsList list );
        /**
         * Metodo para obtener la casilla en el punto especificado.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Puntero de tipo Box.
         */
        Box* get(int f,int c);
        /**
         * Metodo para obtener la primera fila de la matríz.
         * @return Puntero de tipo BoxList.
         */
        BoxList* getHead();
        void search(int filaIn,int columIn,int filaFin,int columnFin);
        bool hasUp(int f,int c);
        bool hasLeft(int f,int c);
        bool hasDown(int f,int c);
        bool hasRight(int f,int c);
        WordsList* getUptoDown(int f,int c);
        WordsList* gettoDown(int f,int c);
        WordsList* getLefttoRight(int f, int c);
        WordsList *gettoRight(int f, int c);
};


#endif //PROYECTO_1_CLIENT_MATRIX_H
