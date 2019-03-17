//
// Created by dcamachog1501 on 15/03/19.
//

#ifndef PROYECTO_1_CLIENT_BOX_H
#define PROYECTO_1_CLIENT_BOX_H

#include <string>

using namespace std;

class Box {
    private:
        int* columna;
        int* fila;
        string* perk;
        string* letter;
    public:
        /**
         * Construtor de la clase box.
         * @param c Columna de tipo entero.
         * @param f Fila de tipo entero.
         * @param p Perk de tipo string.
         * @param l Letra de tipo string.
         */
        Box(int c,int f,string p,string l);
        /**
         * Constructor de la clase Box.
         */
        Box();
        /**
         * Metodo para obtener la letra de la casilla.
         * @return Letra de tipo string.
         */
        string getLetter();
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
        void setLetter(string l);


};

#endif //PROYECTO_1_CLIENT_BOX_H
