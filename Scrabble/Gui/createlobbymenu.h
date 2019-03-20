#ifndef CREATELOBBYMENU_H
#define CREATELOBBYMENU_H

#include <QWizardPage>

namespace Ui {
class CreateLobbyMenu;
}

class CreateLobbyMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit CreateLobbyMenu(QWidget *parent = 0);
    ~CreateLobbyMenu();

private:
    Ui::CreateLobbyMenu *ui;
};

#endif // CREATELOBBYMENU_H
