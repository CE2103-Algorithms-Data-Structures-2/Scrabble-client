//
// Created by dcamachog1501 on 10/03/19.
//

#include "JoinGame_LW.h"
#include "../Manager/Manager.h"

string JoinGame_LW::getInfo()
{

}
bool JoinGame_LW::join(string name,string code)
{
    cliente->sendMessage("join");
    string resp =cliente->receiveMessage();
    int i=resp.compare("send");
    if(i==0)
    {
        string out="";
        Manager::localP->setName(name);
        out+="Jugador@"+name+"$";
        out+="ID@"+code;
        out=Jmanager->toJSON(out);
        cliente->sendMessage(out);
    }
    string m=cliente->receiveMessage();
    if(m.compare("accepted")==0)
    {

        cliente->sendMessage("limit");
        Manager::players->setLimit(stoi(cliente->receiveMessage()));
        return true;
    }
    else if((m.compare("denied")==0))
    {
        return false;
    }

}
