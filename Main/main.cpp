#include <iostream>
#include "../Client/Client.h"
#include "../Interface_Logic/Manager/Manager.h"
#include "../Interface_Logic/JSON_Logic/JSONManager.h"


PlayerList* Manager::players= new PlayerList();
Player* Manager:: localP=new Player();

int main() {
    Manager man= Manager();


    return 0;
}