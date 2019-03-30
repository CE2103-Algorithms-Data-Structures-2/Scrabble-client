//
// Created by kugelblitz on 3/30/19.
//

#ifndef SCRABBLECLIENT_CASILLAGRAFICA_H
#define SCRABBLECLIENT_CASILLAGRAFICA_H


#include <QtGui/QImage>
#include <Interface_Logic/Board_Logic/Box.h>

class CasillaGrafica {
private:
    QImage image;
    Box casilla;
public:
    CasillaGrafica();
    QImage getImage();
    Box getCasilla();
    void setCasilla(Box casilla);
    void setImage(QImage qImage);
};


#endif //SCRABBLECLIENT_CASILLAGRAFICA_H
