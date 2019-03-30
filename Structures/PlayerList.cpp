//
// Created by dcamachog1501 on 15/03/19.
//

#include "PlayerList.h"

PlayerList::PlayerList() 
{
    
    length=0;
    this->head= nullptr;
    this->limit=new int(1);
        
    
}
int PlayerList::getLength()
{
    return this->length;
}
bool PlayerList::add(Player* p)
{
    bool adding=false;
    if(length<*limit) {
        NodeP *n = new NodeP(p);
        if(head== nullptr)
        {
            this->head=n;
        }
        else
        {
            NodeP *temp = this->head;
            while (temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            temp->setNext(n);
            temp= nullptr;
            delete(temp);
        }
        adding=true;
    }
    if(adding)
    {
        length=length+1;
        cout<<"Adicion de jugador exitosa!"<<endl;
    }
    else
    {
        cout<<"ERROR: Limite de jugadores alcanzado."<<endl;
    }
    return adding;



}

int PlayerList::getLimit() {
    return *limit;
}

void PlayerList::del(int i)
{
    if(length!=0) {
        if (head->getValue()->getID() == to_string(i)) {
            NodeP*temp = head;
            head = temp->getNext();
            temp= nullptr;
            delete temp;

        }
        else {
            NodeP *temp = this->head;
            while (temp->getNext()->getValue()->getID()!= to_string(i) && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                NodeP *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                temp2= nullptr;
                delete temp2;
            }
        }
        length--;
    }
}
Player* PlayerList::get(int i)
{
    NodeP* temp=head;
    while(temp->getValue()->getID()!=to_string(i))
    {
        temp=temp->getNext();
    }
    return temp->getValue();
}
 NodeP* PlayerList::getHead()
 {
    return this->head;
 }
 void PlayerList::setLimit(int i)
 {
    if(i>4)
    *limit=4;

    else
    *limit=i;
 }

void PlayerList::print()
{
    NodeP* temp=this->head;
    while(temp!=nullptr)
    {
        cout<<"Jugador #"<<temp->getValue()->getID()<<endl;
        cout<<"Nombre: "<<temp->getValue()->getName()<<endl;
        temp=temp->getNext();
    }
}

void PlayerList::purge()
{
    NodeP* temp  =this->getHead();
    while(temp!= nullptr)
    {
        NodeP* temp2=temp;
        this->head=temp->getNext();
        temp=temp->getNext();
        delete(temp2);
    }
    length=0;

}
