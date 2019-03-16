//
// Created by dcamachog1501 on 15/03/19.
//

#include "Box.h"

Box::Box(int c, int f, string p,string l)
{
    *columna=c;
    *fila=f;
    *letter=l;
    *perk=p;
}
Box::Box()
{
    *columna=0;
    *fila=0;
    *letter="";
    *perk="";
}

string Box::getLetter() {
    return *letter;
}
int Box::getColumn()
{
    return *columna;
}
int Box::getLine()
{
    return *fila;
}
string Box::getPerk()
{
    return *perk;
}
void Box::setColumn(int c)
{
    *columna=c;
}
void Box::setLetter(string l)
{
    *letter=l;
}
void Box::setLine(int l)
{
    *fila=l;
}
void Box::setPerk(string p)
{
    *perk=p;
}
