#include "joinlobbymenu.h"
#include "ui_joinlobbymenu.h"

JoinLobbyMenu::JoinLobbyMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::JoinLobbyMenu)
{
    ui->setupUi(this);
}

JoinLobbyMenu::~JoinLobbyMenu()
{
    delete ui;
}
