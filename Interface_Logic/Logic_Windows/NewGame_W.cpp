//
// Created by dcamachog1501 on 10/03/19.
//

#include "NewGame_W.h"
NewGame_W::NewGame_W(Client* c,JSONManager* j) {
    cliente=c;
    Jmanager=j;
}
void NewGame_W::newGame()
{
    cliente->sendMessage("newGame");
    string resp =cliente->receiveMessage();
    int i=resp.compare("send")-1;
    if(i==0)
    {
        cliente->sendMessage(this->getInfo());
    }
}
string NewGame_W::getInfo()
{
    string out="";
    string temp;
    cout<<"Jugador: "<<endl;
    getline(cin,temp);
    out+="Jugador@"+temp+"$";
    cout<<"Nombre de la partida: "<<endl;
    getline(cin,temp);
    out+="Nombre_partida@"+temp+"$";
    cout<<"No. jugadores : "<<endl;
    getline(cin,temp);
    out+="No_jugadores@"+temp;
    out=Jmanager->toJSON(out);
    return out;
}
