#include "winmenu.h"
#include "ui_winmenu.h"

WinMenu::WinMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WinMenu)
{
    ui->setupUi(this);
}

WinMenu::~WinMenu()
{
    delete ui;
}

void WinMenu::on_pushButton_clicked()
{
    // Volver al menu principal
}
