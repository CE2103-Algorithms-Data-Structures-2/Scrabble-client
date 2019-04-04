//
// Created by dcamachog1501 on 20/03/19.
//

#ifndef PROYECTO_1_CLIENT_MATRIX_H
#define PROYECTO_1_CLIENT_MATRIX_H


#include <Structures/SearchList.h>
#include "../../Structures/WordsList.h"
#include "../../Structures/BoxList.h"
#include "../../Structures/SearchList.h"
class SearchList;
class WordsList;
class Matrix {
    private:
        BoxList* head;
        string letters="{\"a\":\"1\",\"b\":\"3\",\"c\":\"3\",\"d\":\"2\",\"e\":\"1\",\"f\":\"4\",\"g\":\"2\",\"h\":\"4\",\"i\":\"1\",\"j\":\"8\",\"l\":\"1\",\"m\":\"3\",\"n\":\"1\",\"o\":\"1\",\"p\":\"3\",\"q\":\"5\",\"r\":\"1\",\"s\":\"1\",\"t\":\"1\",\"u\":\"1\",\"v\":\"4\",\"x\":\"8\",\"y\":\"4\",\"z\":\"10\",\"ch\":\"5\",\"ll\":\"8\",\"ñ\":\"8\",\"rr\":\"8\"}";

public:
        /**
         * Constructor de la clase Matrix.
         */
        Matrix();
        /**
         * Método para inicializar la matríz en ceros.
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
        SearchList* search(int filaIn,int columIn,int filaFin,int columnFin);
        bool hasUp(int f,int c);
        bool hasLeft(int f,int c);
        bool hasDown(int f,int c);
        bool hasRight(int f,int c);
        WordsList* getUptoDown(int f,int c);
        WordsList* gettoDown(int f,int c);
        WordsList* getLefttoRight(int f, int c);
        WordsList *gettoRight(int f, int c);
        void setSpecial();
        void assignLetters();

    int getPoints();
};


#endif //PROYECTO_1_CLIENT_MATRIX_H
