#include "losemenu.h"
#include "ui_losemenu.h"

LoseMenu::LoseMenu(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::LoseMenu)
{
    ui->setupUi(this);
}

LoseMenu::~LoseMenu()
{
    delete ui;
}


void LoseMenu::on_pushButton_clicked()
{
    // Volver al menu principal
}
