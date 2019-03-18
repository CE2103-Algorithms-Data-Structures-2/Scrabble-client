//
// Created by dcamachog1501 on 17/03/19.
//

#ifndef PROYECTO_1_CLIENT_CHIP_H
#define PROYECTO_1_CLIENT_CHIP_H

#include <string>

using namespace std;

class Chip{

private:
    string letter;
    int points;
    bool comodin;
public:
    /**
     * Constructor de la clase Chip();
     */
    Chip();
    /**
     * Constructor de la clase Chip();
     * @param p Puntaje de tipo entero;
     * @param l Letra de tipo string;
     * @param c COndicion de tipo booleana;
     */
    Chip(int p,string l,bool c);
    /**
     * Metodo para obtener la letra almacenada en esa ficha.
     * @return Letra de tipo string.
     */
    string getLetter();
    /**
     * Metodo para obtener los puntos correspondientes de esa letra.
     * @return Puntaje de tipo entero.
     */
    int getPoints();
    /**
     * Metodo para saber si la ficha es un comodin.
     * @return Condicion de tipo booleana.
     */
    bool isSpecial();
    /**
     * Metodo para establecer la letra que almacena la ficha.
     */
    void setLetter(string l);
    /**
     * Metodo para establecer el puntaje de la ficha.
     */
    void setPoints(int i);
    /**
     * Metodo para establecer si la ficha es especial.
     */
    void setSpecial(bool c);


};


#endif //PROYECTO_1_CLIENT_CHIP_H
