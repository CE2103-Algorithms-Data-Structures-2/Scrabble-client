#include "mainmenu.h"
#include <QApplication>
#include "Manager/Manager.h"

int main(int argc, char *argv[])
{

    Manager* manager = new Manager();


    QApplication a(argc, argv);
    MainMenu w;
    w.show();

    return a.exec();
}
