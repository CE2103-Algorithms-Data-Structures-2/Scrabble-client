//
// Created by dcamachog1501 on 10/03/19.
//

#include "NodeW.h"

NodeW::NodeW(string s)
{
    this->next= nullptr;
    this->value=s;
}
void NodeW::setValue(string s)
{
    this->value=s;
}
void NodeW::setNext(NodeW* n)
{
    this->next=n;
}
string NodeW::getValue()
{
    return this->value;
}
NodeW* NodeW::getNext()
{
    return this->next;
}