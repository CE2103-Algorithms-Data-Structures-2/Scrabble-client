//
// Created by david on 03/04/19.
//

#include "FichaGrafica.h"

FichaGrafica::FichaGrafica(QImage img, char letra) {
    this->img = img;
    this->letra = letra;
}

FichaGrafica::FichaGrafica(Chip chip, QImage img, char letra) {
    this->chip = chip;
    this->img = img;
    this->letra = letra;
}

void FichaGrafica::setPos(int i, int j) {
    this->i = i;
    this->j = j;
}

Chip FichaGrafica::getChip() {
    return this->chip;
}

void FichaGrafica::setImage(QImage img) {
    this->img = img;
}

QImage FichaGrafica::getImage() {
    return this->img;
}

int FichaGrafica::getRow() {
    return this->i;
}

int FichaGrafica::getColum() {
    return this->j;
}