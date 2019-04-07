#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <QtCore/QFuture>
#include <QDrag>
#include <QMouseEvent>
#include <QtConcurrent/QtConcurrent>

#define LOG(x) std::cout << x << std::endl;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Scrabble");
    this->setUp();
    setAcceptDrops(true);
    qsrand((uint) QTime::currentTime().msec());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setUp() {

    QGridLayout *tableroLayout = ui->stackedWidget->widget(4)->findChild<QGridLayout *>("gridLayout_3");
    tableroLayout->setSpacing(0);
    tableroLayout->setMargin(0);

    int num_board = 1;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            Box casilla = Box(j, i);
            Perks nada = nada;
            CasillaGrafica* casillaGrafica = new CasillaGrafica(casilla, num_board, nada);
            board_matrix[i][j] = casillaGrafica;

            tableroLayout->addWidget(casillaGrafica->getLabel(), i, j, 1, 1);

            num_board++;
        }
    }

    QLayout *fichasLayout = ui->stackedWidget->widget(4)->findChild<QLayout *>("horizontalLayout_2");
    tableroLayout->setSpacing(0);
    tableroLayout->setMargin(0);

    for (int i = 0; i < 7; i++) {
        QLabel* label = new QLabel("");
        fichas_array[i] = label;

        fichasLayout->addWidget(label);

        // TODO generar fichas según las dadas por el servidor
        
        char letra = 'A';
        std::string file = this->ChipsPath;
        std::stringstream sstm;
        sstm << file << letra << ".gif";
        file = sstm.str();
        std::cout <<file << std::endl;
        QPixmap pix(file.c_str());
        fichas_array[i]->setPixmap(pix.scaled(this->tileSize, this->tileSize, Qt::KeepAspectRatio));
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
        ui->label_16->setText(nomJugador.c_str());
        Wmanager->update();

        QtConcurrent::run(this, &MainWindow::play);
        //QtConcurrent::run(this, &MainWindow::isTriggered);

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
        QtConcurrent::run(this, &MainWindow::play);
        //QtConcurrent::run(this, &MainWindow::isTriggered);

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
        Wmanager->setTrigger();
        //ui->stackedWidget->setCurrentIndex(4);
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
                    ui->label_14->setStyleSheet("color:#00C851");
                    break;
                case 1:
                    ui->label_26->setText(p->getName().c_str());
                    ui->label_24->setText("Conectado");
                    ui->label_24->setStyleSheet("color:#00C851");
                    break;
                case 2:
                    ui->label_36->setText(p->getName().c_str());
                    ui->label_34->setText("Conectado");
                    ui->label_34->setStyleSheet("color:#00C851");
                    break;
                case 3:
                    ui->label_31->setText(p->getName().c_str());
                    ui->label_29->setText("Conectado");
                    ui->label_29->setStyleSheet("color:#00C851");
                    break;
            }
            counter++;
        }
        usleep(1500000);
    }
    isTriggered();
    usleep(1500000);
}
void MainWindow::isTriggered()
{
    if(Wmanager->triggered())
    {
        ui->stackedWidget->setCurrentIndex(4);
    }

}
void MainWindow::play()
{
    LobbyUpdater();
    isTriggered();
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (ui->stackedWidget->currentIndex() == 4) {
        QWidget *child = childAt(event->pos());
        if (child->parentWidget()->layout() == ui->stackedWidget->widget(4)->findChild<QLayout *>("horizontalLayout_2")) {
            if(qobject_cast<QLabel *>(child))
                createDrag(event->pos(), child);
        }

    }
}

void MainWindow::createDrag(const QPoint &pos, QWidget *widget) {
    if(widget == Q_NULLPTR)
        return;
    QByteArray byteArray(reinterpret_cast<char*>(&widget),sizeof(QWidget*));
    QDrag *drag = new QDrag(this);
    QMimeData * mimeData = new QMimeData;
    mimeData->setData("Label",byteArray);
    drag->setMimeData(mimeData);
    QPoint globalPos = mapToGlobal(pos);
    QPoint p = widget->mapFromGlobal(globalPos);
    drag->setHotSpot(p);
    drag->setPixmap(widget->grab());
    drag->exec(Qt::CopyAction | Qt::MoveAction);
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event) {
    if(event->mimeData()->hasFormat("Label"))
        event->acceptProposedAction();
}

void MainWindow::dropEvent(QDropEvent *event) {
    QGridLayout *tableroLayout = ui->stackedWidget->widget(4)->findChild<QGridLayout *>("gridLayout_3");

    QByteArray byteArray = event->mimeData()->data("Label");
    QWidget * widget = *reinterpret_cast<QWidget**>(byteArray.data());
    QLabel * new_label =  qobject_cast<QLabel *>(widget);

    QWidget *current_children = childAt(event->pos());
    QLabel * current_label = qobject_cast<QLabel*>(current_children);
    int index = 0;
    if(new_label){
        int x = current_label->x();
        int y = current_label->y();
        std::cout << "X: " << x << " Y: " << y << std::endl;
        tableroLayout->replaceWidget(current_label, new_label);
    }
}