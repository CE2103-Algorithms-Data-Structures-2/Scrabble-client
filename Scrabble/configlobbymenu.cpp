#include "configlobbymenu.h"
#include "ui_configlobbymenu.h"

ConfigLobbyMenu::ConfigLobbyMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::ConfigLobbyMenu)
{
    ui->setupUi(this);
}

ConfigLobbyMenu::~ConfigLobbyMenu()
{
    delete ui;
}
