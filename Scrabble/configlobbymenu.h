#ifndef CONFIGLOBBYMENU_H
#define CONFIGLOBBYMENU_H

#include <QWizardPage>

namespace Ui {
class ConfigLobbyMenu;
}

class ConfigLobbyMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit ConfigLobbyMenu(QWidget *parent = 0);
    ~ConfigLobbyMenu();

private:
    Ui::ConfigLobbyMenu *ui;
};

#endif // CONFIGLOBBYMENU_H
