#ifndef WAITFORGAMESTARTMENU_H
#define WAITFORGAMESTARTMENU_H

#include <QWizardPage>

namespace Ui {
class WaitForGameStartMenu;
}

class WaitForGameStartMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit WaitForGameStartMenu(QWidget *parent = 0);
    ~WaitForGameStartMenu();

private:
    Ui::WaitForGameStartMenu *ui;
};

#endif // WAITFORGAMESTARTMENU_H
