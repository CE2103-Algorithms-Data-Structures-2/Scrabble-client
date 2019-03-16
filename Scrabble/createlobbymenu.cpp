#include "createlobbymenu.h"
#include "ui_createlobbymenu.h"

CreateLobbyMenu::CreateLobbyMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::CreateLobbyMenu)
{
    ui->setupUi(this);
}

CreateLobbyMenu::~CreateLobbyMenu()
{
    delete ui;
}
