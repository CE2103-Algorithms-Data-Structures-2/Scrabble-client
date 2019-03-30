//
// Created by dcamachog1501 on 15/03/19.
//

#include "Box.h"

Box::Box(int c, int f, string p,Chip* l)
{
    columna=c;
    fila=f;
    ficha=l;
    perk=p;
    next= nullptr;
}
Box::Box(int c, int f)
{
    this->columna=c;
    this->fila=f;
    this->perk="";
    this->next= nullptr;
    this->ficha= nullptr;
}

Box::Box()
{
    columna=0;
    fila=0;
    ficha= nullptr;
    perk="";
    next= nullptr;
}

Chip* Box::getChip() {
    return ficha;
}
int Box::getColumn()
{
    return columna;
}
int Box::getLine()
{
    return fila;
}
string Box::getPerk()
{
    return perk;
}
void Box::setColumn(int c)
{
    columna=c;
}
void Box::setChip(Chip* c)
{
    ficha=c;
}
void Box::setLine(int l)
{
    fila=l;
}
void Box::setPerk(string p)
{
    perk=p;
}

Box *Box::getNext() {
    return this->next;
}

void Box::setNext(Box *b)
{
    this->next=b;
}

