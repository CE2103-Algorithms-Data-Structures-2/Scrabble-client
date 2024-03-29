//
// Created by david on 03/04/19.
//

#ifndef SCRABBLECLIENT_CASILLAGRAFICA_H
#define SCRABBLECLIENT_CASILLAGRAFICA_H

#include <QtWidgets/QLabel>
#include "Bonus.h"
#include "Box.h"
#include <string>

class CasillaGrafica {
public:
    CasillaGrafica(Box casilla, int casilla_num, Perks bonus);

    Box getCasilla();
    void setCasilla(Box casilla);
    Perks getBonus();
    void setLetra(char letra);
    char getLetra();
    QLabel* getLabel();
    void setLabel(QLabel* img);

private:
    std::string boardTilePath = "../AssetsScrabble/TilesBoard/board_";
    std::string ChipsPath = "../AssetsScrabble/LetrasScrabble/";
    const int tileSize = 80;

    Box casilla;
    QLabel* img;
    Perks bonus;
};


#endif //SCRABBLECLIENT_CASILLAGRAFICA_H
