#include "Gui/mainmenu.h"
#include <QApplication>
#include <QtWidgets>
#include <Player/Player.h>
#include <Structures/PlayerList.h>
#include <Manager/Manager.h>

PlayerList* Manager::players= new PlayerList();
Player* Manager:: localP=new Player();

#define getName(var)  #var

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenu w;
    w.show();

    Manager man= Manager();


    return a.exec();
}
