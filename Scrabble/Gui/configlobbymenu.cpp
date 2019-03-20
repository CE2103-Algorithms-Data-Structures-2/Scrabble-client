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

void ConfigLobbyMenu::on_lineEdit_editingFinished()
{
    // Nombre del lobby que se desea crear
}

void ConfigLobbyMenu::on_lineEdit_3_editingFinished()
{
    // Nombre del jugador que crear el lobby
}

void ConfigLobbyMenu::on_comboBox_activated(const QString &arg1)
{
    // Numero de jugadores que forman parte de la partida
}

void ConfigLobbyMenu::on_pushButton_clicked()
{
    // Si esta correcta, enviar configuracion al servidor
}
