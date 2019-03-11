//
// Created by dcamachog1501 on 10/03/19.
//

#include "Node.h"

Node::Node(string s)
{
    this->next= nullptr;
    this->value=s;
}
void Node::setValue(string s)
{
    this->value=s;
}
void Node::setNext(Node* n)
{
    this->next=n;
}
string Node::getValue()
{
    return this->value;
}
Node* Node::getNext()
{
    return this->next;
}