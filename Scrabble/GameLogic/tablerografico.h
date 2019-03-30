#ifndef TABLEROGRAFICO_H
#define TABLEROGRAFICO_H

#include <GameLogic/casillagrafica.h>
#include <GameLogic/ficha.h>

class TableroGrafico
{
public:
    TableroGrafico();
    CasillaGrafica getCasilla(int row, int column);
    void ponerFicha(Ficha ficha, CasillaGrafica casillaGrafica);
private:
    CasillaGrafica casillas[15][15];
};

#endif // TABLEROGRAFICO_H
