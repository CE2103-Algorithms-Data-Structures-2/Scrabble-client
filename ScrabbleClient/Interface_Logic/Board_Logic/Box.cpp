//
// Created by dcamachog1501 on 15/03/19.
//

#include "Box.h"

Box::Box(int c, int f, string p,Chip* l)
{
    this->columna=c;
    this->fila=f;
    this->ficha=l;
    this->perk=p;
    this->next= nullptr;
    this->prev= nullptr;
}
Box::Box(int c, int f)
{
    this->columna=c;
    this->fila=f;
    this->perk="";
    this->next= nullptr;
    this->prev= nullptr;
    this->ficha= nullptr;
}

Box::Box()
{
    this->columna=0;
    this->fila=0;
    this->ficha= nullptr;
    this->perk="";
    this->next= nullptr;
    this->prev=nullptr;
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

Box *Box::getPrev()
{
    return this->prev;
}

void Box::setPrev(Box *b)
{
    this->prev=b;
}

void Box::setCoords(int f, int c) {
    this->fila=f;
    this->columna=c;
}

