#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <QtCore/QFuture>
#include <QtConcurrent/QtConcurrent>

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

        Wmanager->localP->setHost();
        ui->stackedWidget->setCurrentIndex(3);
        ui->label_45->setText(Wmanager->getParty().c_str());
        ui->label_42->setText(Wmanager->getCode().c_str());
        QString qString = QString::fromStdString(nomLobby);
        ui->label_45->setText(qString);
        Wmanager->update();

        QtConcurrent::run(this, &MainWindow::LobbyUpdater);

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
    if (ui->lineEdit->text().toStdString() != "")
    {
        std::string codigo = ui->lineEdit->text().toStdString();
        std::string nomJugador = ui->lineEdit_4->text().toStdString();
        Wmanager->setCode(codigo);
        Wmanager->newJoin(nomJugador,codigo);


        ui->stackedWidget->setCurrentIndex(3);
        ui->label_45->setText(Wmanager->getParty().c_str());
        ui->label_42->setText(Wmanager->getCode().c_str());
        Wmanager->update();

        QtConcurrent::run(this, &MainWindow::LobbyUpdater);
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

    if((Wmanager->localP->isHost())&&(Wmanager->players->getLength()==Wmanager->players->getLimit()))
    {
        ui->stackedWidget->setCurrentIndex(4);
    } else
    {
        ui->label_43->setText("Solo el anfitrion puede empezar la partida!");
    }
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
void MainWindow::LobbyUpdater()
{
    int counter = 0;
    while (counter <= Wmanager->players->getLimit() - 1)
    {
        if(Wmanager->players->getLength()>counter)
        {
            Player* p= Wmanager->players->getLast();
            switch (stoi(p->getID())) {
                case 0:
                    ui->label_16->setText(p->getName().c_str());
                    ui->label_14->setText("Conectado");
                    ui->label_14->setStyleSheet("{color:#00c851}");
                    break;
                case 1:
                    ui->label_26->setText(p->getName().c_str());
                    ui->label_24->setText("Conectado");
                    ui->label_24->setStyleSheet("{color:#00c851}");
                    break;
                case 2:
                    ui->label_36->setText(p->getName().c_str());
                    ui->label_34->setText("Conectado");
                    ui->label_34->setStyleSheet("{color:#00c851}");
                    break;
                case 3:
                    ui->label_31->setText(p->getName().c_str());
                    ui->label_29->setText("Conectado");
                    ui->label_29->setStyleSheet("{color:#00c851}");
                    break;
            }
            counter++;
        }
        usleep(1500000);
    }

}
