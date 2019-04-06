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

    QGridLayout *LabelLayout = ui->stackedWidget->widget(4)->findChild<QGridLayout *>("gridLayout_3");
    LabelLayout->setSpacing(0);
    LabelLayout->setMargin(0);

    int num_board = 1;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            Box casilla = Box(j, i);
            Perks nada = nada;
            CasillaGrafica* casillaGrafica = new CasillaGrafica(casilla, num_board, nada);
            board_array[i][j] = casillaGrafica;

            LabelLayout->addWidget(casillaGrafica->getLabel(), i, j, 1, 1);

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

        // TODO generar fichas según las dadas por el servidor
        
        char letra = 'A';
        std::string file = "../AssetsScrabble/LetrasScrabble/";
        std::stringstream sstm;
        sstm << file << letra << ".gif";
        file = sstm.str();
        std::cout <<file << std::endl;
        QPixmap pix(file.c_str());
        fichas_array[i]->setPixmap(pix.scaled(80, 80, Qt::KeepAspectRatio));
    }
}

void MainWindow::actualizarFichas() {
    // Tomar fichas que da el servidor y volver a llenar layout
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
        Wmanager->newGame(nomJugador,nomLobby,numJugadores);

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

        Wmanager->newJoin(nomJugador,codigo);

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

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_14_pressed()
{

}
