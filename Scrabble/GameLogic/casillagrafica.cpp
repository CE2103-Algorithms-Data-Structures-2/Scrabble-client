#include "casillagrafica.h"

CasillaGrafica::CasillaGrafica(int row, int column, Point coordinates, Perk bonus)
{
    this->row = row;
    this->column = column;
    this->coordinates = coordinates;
    this->bonus = bonus;
}

void CasillaGrafica::setLetter(char letter) {
    this->letter = letter;
}

void CasillaGrafica::setImg(QImage img) {
    this->img = img;
}

Perk CasillaGrafica::getBonus() {
    return this->bonus;
}

int CasillaGrafica::getRow() {
    return this->row;
}

int CasillaGrafica::getColumn() {
    return this->column;
}

char CasillaGrafica::getLetter() {
    return this->letter;
}
