#include "tilelabel.h"
#include <string>
#include <iostream>
#include <QtGui/QDrag>
#include <sstream>
#include <QtCore/QTextStream>

TileLabel::TileLabel(QWidget *parent, Qt::WindowFlags) : QLabel(parent) {
    setAcceptDrops(true);
}

void TileLabel::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton
        && iconLabel->geometry().contains(event->pos())) {

        QDrag *drag = new QDrag(this);
        QMimeData *mimeData = new QMimeData;

        mimeData->setText(commentEdit->toPlainText());
        drag->setMimeData(mimeData);
        drag->setPixmap(iconPixmap);

        Qt::DropAction dropAction = drag->exec();

}