#include "ficha.h"

Ficha::Ficha(char letter, QImage img)
{
    this->letter = letter;
    this->img = img;
}

Ficha::getLetter() {
    return this->letter;
}

Ficha::getImg() {
    return this->img;
}
