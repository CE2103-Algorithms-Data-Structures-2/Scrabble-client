#include "waitforgamestartmenu.h"
#include "ui_waitforgamestartmenu.h"

WaitForGameStartMenu::WaitForGameStartMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WaitForGameStartMenu)
{
    ui->setupUi(this);
}

WaitForGameStartMenu::~WaitForGameStartMenu()
{
    delete ui;
}
