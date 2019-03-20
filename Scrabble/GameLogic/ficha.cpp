#include "ficha.h"

Ficha::Ficha(char letter, QImage img)
{
    this->letter = letter;
    this->img = img;
}

char Ficha::getLetter() {
    return this->letter;
}

QImage Ficha::getImg() {
    return this->img;
}
