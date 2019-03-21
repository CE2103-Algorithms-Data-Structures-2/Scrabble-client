#include <iostream>
#include "../Client/Client.h"
#include "../Interface_Logic/Manager/Manager.h"
#include "../Interface_Logic/JSON_Logic/JSONManager.h"
#include "../Interface_Logic/Board_Logic/Matrix.h"


PlayerList* Manager::players= new PlayerList();
Player* Manager:: localP=new Player();

#define getName(var)  #var

int main() {
    Manager man= Manager();
    /*Matrix* m= new Matrix();
    m->init();*/
    return 0;
}

