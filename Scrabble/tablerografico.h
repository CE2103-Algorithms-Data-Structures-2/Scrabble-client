#ifndef TABLEROGRAFICO_H
#define TABLEROGRAFICO_H

#include <casillagrafica.h>
#include <ficha.h>

class TableroGrafico
{
public:
    TableroGrafico();
    CasillaGrafica getCasilla(int row, int column);
    void ponerFicha(Ficha ficha, CasillaGrafica casillaGrafica);
private:
    CasillaGrafica casillas[][];
};

#endif // TABLEROGRAFICO_H
