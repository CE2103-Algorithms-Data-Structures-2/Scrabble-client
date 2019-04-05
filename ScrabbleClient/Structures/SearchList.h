//
// Created by dcamachog1501 on 03/04/19.
//

#ifndef SCRABBLECLIENT_SEARCHLIST_H
#define SCRABBLECLIENT_SEARCHLIST_H


#include "WordsList.h"
class WordsList;

class SearchList
{
    private:
        WordsList* head;
        int length;
    public:
        /**
         * Constructor de la clase SearchList
         */
        SearchList();
        /**
         * Metodo para obtener laa cabeza de la lista.
         * @return Puntero de tipo WordList.
         */
        WordsList* getHead();
        /**
         * Metodo para obtener la longitud de la lista.
         * @return Longitud de tipo entero.
         */
        int getlength();
        /**
         * Metodo para anadir una lista de fichas a la lista de busqueda.
         * @param w Puntero de tipo WordList.
         */
        void add(WordsList* w);
        /**
         * Metodo para eliminar una lista de fichas de la lista de busqueda.
         * @param w Puntero de tipo WordList.
         */
        void del(WordsList* w);
        /**
         * Metodo para eliminar las palabras repetidas en la lista.
         */
        void purge();
        /**
         * Metodo para imprimir las palabras en la lista.
         */
        void print();
        /*
         * Metodo para imprimir el puntaje obtenido por cada palabra encontrada.
         */
        void printPoints();
        /**
         * Metodo para determinar la cantidad de veces que esta una palabra en la lista.
         * @param fi Fila inicial de tipo entero
         * @param ci Columna inicial de tipo entero.
         * @param ff Fila final de tipo entero.
         * @param cf Columna final de tipo entero.
         * @return Cantidad de tipo entero.
         */
        int times(int fi,int ci,int ff,int cf);
};


#endif //SCRABBLECLIENT_SEARCHLIST_H
