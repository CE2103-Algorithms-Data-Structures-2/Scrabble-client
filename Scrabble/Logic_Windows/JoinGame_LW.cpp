//
// Created by dcamachog1501 on 10/03/19.
//

#include "JoinGame_LW.h"
#include "Manager/Manager.h"

string JoinGame_LW::getInfo()
{
    string out="";
    string temp;
    cout<<"Jugador: "<<endl;
    getline(cin,temp);
    Manager::localP->setName(temp);
    out+="Jugador@"+temp+"$";
    cout<<"Codigo de la partida: "<<endl;
    getline(cin,temp);
    out+="ID@"+temp;
    out=Jmanager->toJSON(out);
    return out;
}
bool JoinGame_LW::join()
{
    cliente->sendMessage("join");
    string resp =cliente->receiveMessage();
    int i=resp.compare("send");
    if(i==0)
    {
        cliente->sendMessage(this->getInfo());
    }
    string m=cliente->receiveMessage();
    if(m.compare("accepted")==0)
    {

        cliente->sendMessage("limit");
        Manager::players->setLimit(stoi(cliente->receiveMessage()));
        cliente->sendMessage("indexOf");
        if(cliente->receiveMessage().compare("send")==0) {
            cliente->sendMessage(Manager::localP->getName());
            Manager::localP->setID(cliente->receiveMessage());
        }
        return true;
    }
    else if((m.compare("denied")==0))
    {
        return false;
    }

}
