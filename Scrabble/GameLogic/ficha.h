#ifndef FICHA_H
#define FICHA_H

#include <QImage>

class Ficha
{
public:
    Ficha(char, QImage);
    char getLetter();
    QImage getImg();

private:
    char letter;
    QImage img;
};

#endif // FICHA_H
