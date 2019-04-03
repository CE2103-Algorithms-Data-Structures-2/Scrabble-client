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
    setWindowTitle("Scrabble");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setUp() {

    // New GridLayout for Button Array
    QGridLayout *LabelLayout = ui->stackedWidget->widget(4)->findChild<QGridLayout *>("gridLayout_3");
    LabelLayout->setSpacing(0);
    LabelLayout->setMargin(0);


    // Create 20x20 Buttons in Grid
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {

            QLabel *label = new QLabel("");

            // Next line will be used to help find the Path later
            board_array[i][j] = label;

            LabelLayout->addWidget(label, i, j, 1, 1);
        }
    }


    int num_board = 1;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            std::string file = "/home/kugelblitz/Documents/QtGameTest/AssetsScrabble/TilesBoard/board_";
            std::stringstream sstm;
            sstm << file << num_board << ".png";
            file = sstm.str();

            QPixmap pix(file.c_str());
            board_array[i][j]->setPixmap(pix);
            num_board++;

        }
    }

    QLayout *fichasLayout = ui->stackedWidget->widget(4)->findChild<QLayout *>("horizontalLayout_2");
    LabelLayout->setSpacing(0);
    LabelLayout->setMargin(0);


    for (int i = 0; i < 7; i++) {
        QLabel *label = new QLabel("");
        fichas_array[i] = label;

        fichasLayout->addWidget(label);

        char letra = 'A';
        std::string file = "/home/kugelblitz/Documents/QtGameTest/AssetsScrabble/LetrasScrabble/";
        std::stringstream sstm;
        sstm << file << letra << ".gif";
        file = sstm.str();
        std::cout <<file << std::endl;
        QPixmap pix(file.c_str());
        fichas_array[i]->setPixmap(pix);



    }
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
    if (ui->lineEdit_2->text().toStdString() != "" && ui->lineEdit_3->text().toStdString() != "") {

        std::string nomLobby = ui->lineEdit_2->text().toStdString();
        std::string nomJugador = ui->lineEdit_3->text().toStdString();
        std::string numJugadores = ui->comboBox->currentText().toStdString();
        // Wmanager->newGame(nomJugador,nomLobby,numJugadores);

        LOG(nomLobby);
        LOG(nomJugador);
        LOG(numJugadores);

        ui->stackedWidget->setCurrentIndex(3);
    }
    else
    {
        ui->label_2->setText("¡Debe rellenar todos los campos!");
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
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->lineEdit->text().toStdString() != "") {
        std::string codigo = ui->lineEdit->text().toStdString();
        std::string nomJugador = ui->lineEdit_4->text().toStdString();

        // Wmanager->newJoin(nomJugador,codigo);

        LOG(codigo);
        LOG(nomJugador);

        ui->stackedWidget->setCurrentIndex(3);
    }

    else {
        ui->label_3->setText("¡Debe rellenar todos los campos!");
    }
}

void MainWindow::on_lineEdit_4_returnPressed()
{

}

void MainWindow::on_lineEdit_returnPressed()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    // Verificar si host es el que esta iniciando
        // Si es verificar si todos están listos
            // Comenzar Partida
        // Si no poner label de error
    // Si no
        // Poner label de error

        ui->stackedWidget->setCurrentIndex(4);
}
