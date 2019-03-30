#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_14_clicked()
{
<<<<<<< HEAD
    if ((!ui->lineEdit_2->text().toStdString().compare("")==0) &&( !ui->lineEdit_3->text().toStdString().compare("")==0)){
=======
    if (ui->lineEdit_2->text().toStdString() != "" && ui->lineEdit_3->text().toStdString() != "") {
>>>>>>> e1a2a1996afa8e8027b1edd4dfa1fdf0a30faec2
        std::string nomLobby = ui->lineEdit_2->text().toStdString();
        std::string nomJugador = ui->lineEdit_3->text().toStdString();
        std::string numJugadores = ui->comboBox->currentText().toStdString();
        Wmanager->newGame(nomJugador,nomLobby,numJugadores);

        LOG(nomLobby);
        LOG(nomJugador);
        LOG(numJugadores);
    }
    else
    {
        cout<<"Llene todos los campos"<<endl;
    }



}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    LOG("something");
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->lineEdit->text().toStdString() != "") {
        std::string codigo = ui->lineEdit->text().toStdString();
        std::string nomJugador = ui->lineEdit_4->text().toStdString();

        LOG(codigo)
        LOG(nomJugador)
    }
}

void MainWindow::on_lineEdit_4_returnPressed()
{

}

void MainWindow::on_lineEdit_returnPressed()
{

}
