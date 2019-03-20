#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWizardPage>

namespace Ui {
class GameBoard;
}

class GameBoard : public QWizardPage
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget *parent = 0);
    ~GameBoard();

private:
    Ui::GameBoard *ui;
};

#endif // GAMEBOARD_H
