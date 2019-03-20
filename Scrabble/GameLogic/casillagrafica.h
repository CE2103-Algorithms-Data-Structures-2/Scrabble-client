#ifndef CASILLAGRAFICA_H
#define CASILLAGRAFICA_H

#include <QImage>
#include "perk.h"
#include "point.h"

class CasillaGrafica
{

public:
    CasillaGrafica(int row, int column, Point coordinates, Perk bonus);
    void setLetter(char letter);
    void setImg(QImage img);
    int getRow();
    int getColumn();
    Perk getBonus();
    char getLetter();

private:
    Point coordinates;
    int row;
    int column;
    char letter;
    QImage img;
    Perk bonus;
};

#endif // CASILLAGRAFICA_H
