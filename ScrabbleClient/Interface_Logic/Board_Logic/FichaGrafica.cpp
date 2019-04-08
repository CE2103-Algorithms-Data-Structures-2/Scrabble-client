//
// Created by david on 03/04/19.
//

#include "FichaGrafica.h"

FichaGrafica::FichaGrafica(Chip chip, QLabel* img) {
    this->chip = chip;
    this->img = new QLabel("");
    this->img->setPixmap(*img->pixmap());
}

void FichaGrafica::setPos(int i, int j) {
    this->i = i;
    this->j = j;
}

Chip FichaGrafica::getChip() {
    return this->chip;
}

void FichaGrafica::setImage(QLabel* label) {
    this->img->setPixmap(*label->pixmap());
}

QPixmap FichaGrafica::getImage() {
    return *this->img->pixmap();
}

int FichaGrafica::getRow() {
    return this->i;
}

int FichaGrafica::getColum() {
    return this->j;
}