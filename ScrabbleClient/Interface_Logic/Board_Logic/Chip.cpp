//
// Created by dcamachog1501 on 18/03/1

#include "Chip.h"

Chip::Chip()
{
    this->letter=" ";
    this->points=0;
    this->comodin=false;
}
Chip::Chip(int p, string l, bool c)
{
    this->comodin=c;
    this->points=p;
    this->letter=l;
}
void Chip::setSpecial(bool s)
{
    this->comodin=s;
}
void Chip::setPoints(int i)
{
    this->points=i;
}
void Chip::setLetter(string l)
{
    this->letter=l;
}
bool Chip::isSpecial()
{
    return this->comodin;
}
int Chip::getPoints()
{
    return this->points;
}
string Chip::getLetter()
{
    return this->letter;
}
