//
// Created by dcamachog1501 on 10/03/19.
//

#include "NodeW.h"

NodeW::NodeW(Chip* c)
{
    this->next= nullptr;
    this->ficha=c;
}
void NodeW::setChip(Chip* c)
{
    this->ficha=c;
}
void NodeW::setNext(NodeW* n)
{
    this->next=n;
}
Chip *NodeW::getChip()
{
    return this->ficha;
}
NodeW* NodeW::getNext() {
    return this->next;

}