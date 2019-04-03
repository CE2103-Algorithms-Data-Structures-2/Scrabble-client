#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Interface_Logic/Manager/Manager.h>
#include <QtWidgets/QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QLabel* board_array[15][15];
    QLabel* fichas_array[7];

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setUp();
    static Manager* Wmanager;

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_lineEdit_returnPressed();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_4_returnPressed();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
