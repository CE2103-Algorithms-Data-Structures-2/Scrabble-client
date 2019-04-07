#ifndef TILELABEL_H
#define TILELABEL_H

#include <QWidget>
#include <QMouseEvent>
#include <Qt>
#include <QLabel>

class TileLabel : public QLabel
{
Q_OBJECT

public:
    TileLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);
    void dragEnterEvent(QDragEnterEvent *);

};

#endif // CLICKABLELABEL_H