#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;

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
    if (!ui->lineEdit_2->text().toStdString().compare("") && !ui->lineEdit_3->text().toStdString().compare("")) {
        std::string nomLobby = ui->lineEdit_2->text().toStdString();
        std::string nomJugador = ui->lineEdit_3->text().toStdString();
        std::string numJugadores = ui->comboBox->currentText().toStdString();

        LOG(nomLobby);
        LOG(nomJugador);
        LOG(numJugadores);
    }



}

void MainWindow::on_lineEdit_returnPressed()
{
    std::string codigo = ui->lineEdit->text().toStdString();

    LOG(codigo)
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
