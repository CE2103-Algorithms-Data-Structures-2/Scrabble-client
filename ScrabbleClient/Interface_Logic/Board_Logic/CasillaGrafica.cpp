//
// Created by david on 03/04/19.
//

#include <sstream>
#include <iostream>
#include "CasillaGrafica.h"

CasillaGrafica::CasillaGrafica(Box casilla, int casilla_num, Perks bonus) {
    this->casilla = casilla;
    this->img = new QLabel();
    std::stringstream sstm;
    sstm << this->boardTilePath << casilla_num << ".png";
    QPixmap pix(sstm.str().c_str());
    img->setPixmap(pix);

    this->bonus = bonus;
}

void CasillaGrafica::setLetra(char letra) {
    // TODO cambiar contenido de Chip dentro de casilla

    std::stringstream sstm;
    sstm << this->ChipsPath << letra << ".gif";
    QPixmap pix(sstm.str().c_str());
    this->img->setPixmap(pix.scaled(80, 80, Qt::KeepAspectRatio));
}

Perks CasillaGrafica::getBonus() {
    return this->bonus;
}

Box CasillaGrafica::getCasilla() {
    return this->casilla;
}

void CasillaGrafica::setCasilla(Box casilla) {
    this->casilla = casilla;
}

QLabel* CasillaGrafica::getLabel() {
    return this->img;
}

