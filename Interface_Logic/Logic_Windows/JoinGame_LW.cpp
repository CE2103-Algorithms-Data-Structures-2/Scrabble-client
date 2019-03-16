//
// Created by dcamachog1501 on 10/03/19.
//

#include "JoinGame_LW.h"
string JoinGame_LW::getInfo()
{
    string out="";
    string temp;
    cout<<"Jugador: "<<endl;
    getline(cin,temp);
    out+="Jugador@"+temp+"$";
    cout<<"Codigo de la partida: "<<endl;
    getline(cin,temp);
    out+="ID@"+temp;
    out=Jmanager->toJSON(out);
    return out;
}
void JoinGame_LW::join()
{
    cliente->sendMessage("join");
    string resp =cliente->receiveMessage();
    int i=resp.compare("send");
    if(i==0)
    {
        cliente->sendMessage(this->getInfo());
    }
}
