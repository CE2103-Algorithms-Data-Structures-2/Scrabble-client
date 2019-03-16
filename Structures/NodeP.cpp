//
// Created by dcamachog1501 on 15/03/19.
//

#include "NodeP.h"
NodeP::NodeP()
{

}
NodeP::NodeP(Player p) {
    *jugador=p;
    this->next=nullptr;
}
NodeP* NodeP::getNext()
{
    return this->next;
}
Player* NodeP::getValue()
{
    return this->jugador;
}
void NodeP::setNext(NodeP *p)
{
    this->next=p;
}
