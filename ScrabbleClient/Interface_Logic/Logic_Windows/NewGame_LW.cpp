//
// Created by dcamachog1501 on 10/03/19.
//

#include "NewGame_LW.h"
#include "../Manager/Manager.h"


void NewGame_LW::newGame(string name,string partida,string jugadores)
{
    cliente->sendMessage("newGame");
    string resp =cliente->receiveMessage();
    int i=resp.compare("send");
    if(i==0)
    {
        string out="";

        Manager::localP->setName(name);
        Manager::localP->setID("0");
        out+="Jugador@"+name+"$";

        out+="Nombre_partida@"+partida+"$";

        Manager::players->setLimit(stoi(jugadores));
        out+="No_jugadores@"+jugadores;
        out=Jmanager->toJSON(out);
        Manager::players->add(Manager::localP);
        cliente->sendMessage(this->getInfo());
    }

}

