#ifndef CASILLAGRAFICA_H
#define CASILLAGRAFICA_H

#include "point.h"
#include <QImage>
#include "perk.h"

class CasillaGrafica
{

public:
    CasillaGrafica(int row, int column, Point coodinates, Perk bonus);
    void setLetter(char letter);
    void setImg(QImage img);
    void setLetter(char letter);
    int getRow();
    int getColumn();
    Perk getBonus();
    char getLetter();

private:
    Point coodinates;
    int row;
    int column;
    char letter;
    QImage img;
    Perk bonus;
};

#endif // CASILLAGRAFICA_H
