//
// Created by david on 03/04/19.
//

#ifndef SCRABBLECLIENT_FICHAGRAFICA_H
#define SCRABBLECLIENT_FICHAGRAFICA_H

#include <QtWidgets/QLabel>
#include "Chip.h"

class FichaGrafica {
public:
    FichaGrafica(Chip* chip, QLabel* img);
    Chip* getChip();
    void setImage(QLabel* img);
    void setPos(int i, int j);
    int getRow();
    int getColum();
private:
    Chip* chip;
    QLabel* img;
    int i, j;
};


#endif //SCRABBLECLIENT_FICHAGRAFICA_H
