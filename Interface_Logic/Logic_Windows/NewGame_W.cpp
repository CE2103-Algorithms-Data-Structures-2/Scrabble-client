//
// Created by dcamachog1501 on 10/03/19.
//

#include "NewGame_W.h"

NewGame_W::NewGame_W( Manager* m)
{
    man=m;
}
void NewGame_W::newGame()
{
    man->sendtoServer("newGame");
    string resp =man->getfromServer();
    int i=resp.compare("send")-1;
    if(i==0)
    {
        man->sendtoServer(this->getInfo());
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
    out=man->getJmanager().toJSON(out);
    return out;
}