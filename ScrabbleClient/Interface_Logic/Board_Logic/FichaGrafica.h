//
// Created by david on 03/04/19.
//

#ifndef SCRABBLECLIENT_FICHAGRAFICA_H
#define SCRABBLECLIENT_FICHAGRAFICA_H


#include <QtGui/QImage>
#include "Chip.h"

class FichaGrafica {
public:
    FichaGrafica(Chip chip, QImage img, char letra);
    FichaGrafica(QImage img, char letra);
    Chip chip;
    QImage img;
    char letra;
    int i, j;
private:
    Chip getChip();
    void setImage(QImage img);
    QImage getImage();
    void setPos(int i, int j);
    int getRow();
    int getColum();
};


#endif //SCRABBLECLIENT_FICHAGRAFICA_H
