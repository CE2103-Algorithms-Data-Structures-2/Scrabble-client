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
        /**
         * Metodo para conseguir todas las palabras formadas a partir de una palabra central.
         * @param filaIn Fila inicial de tipo entero.
         * @param columIn Columna inicial de tipo entero.
         * @param filaFin Fila final de tipo entero.
         * @param columnFin Columna final de tipo entero.
         * @return Lista de palabras encontradas de tipo SearchList*.
         */
        SearchList* search(int filaIn,int columIn,int filaFin,int columnFin);
        /**
         * Metodo para saber si hay una letra en la casilla que esta arriba de la casilla en cuestion.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Condicion de tipo booleano.
         */
        bool hasUp(int f,int c);
        /**
         * Metodo para saber si hay una letra en la casilla que esta a la izquierda de la casilla en cuestion.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Condicion de tipo booleano.
         */
        bool hasLeft(int f,int c);
        /**
         * Metodo para saber si hay una letra en la casilla que esta abajo de la casilla en cuestion.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Condicion de tipo booleano.
         */
        bool hasDown(int f,int c);
        /**
         * Metodo para saber si hay una letra en la casilla que esta a la derecha de la casilla en cuestion.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Condicion de tipo booleano.
         */
        bool hasRight(int f,int c);
        /**
         * Metodo para obtener la palabra formada por la casilla en cuestion y las fichas que estan arriba y abajo de la misma.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Lista de palabras de tipo WordList*
         */
        WordsList* getUptoDown(int f,int c);
        /**
         * Metodo para obtener la palabra formada por una casilla en cuestion y todas las fichas debajo de la misma.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Lista de palabras de tipo WordList*.
         */
        WordsList* gettoDown(int f,int c);
        /**
         * Metodo para obtener la palabra formada por la casilla en cuestion y las fichas que estan a la derecha e izquierda de la misma.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Lista de palabras de tipo WordList*
         */
        WordsList* getLefttoRight(int f, int c);
        /**
         * Metodo para obtener la palabra formada por una casilla en cuestion y todas las fichas a la derecha de la misma.
         * @param f Fila de tipo entero.
         * @param c Columna de tipo entero.
         * @return Lista de palabras de tipo WordList*.
         */
        WordsList *gettoRight(int f, int c);
        /**
         * Metodo para establecer cuales casillas son especiales.
         */
        void setSpecial();
        /**
         * Metodo para asignar el puntaje predeterminado a cada una de las fichas.
         */
        void assignLetters();
        /**
         * Metodo para copiar la matriz;
         * @return
         */
        Matrix copy();
        void addLine(BoxList b);

    bool isCentered();
};


#endif //PROYECTO_1_CLIENT_MATRIX_H
