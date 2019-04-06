//
// Created by dcamachog1501 on 25/03/19.
//

#include <iostream>
#include "BoxList.h"
BoxList::BoxList()
{
    this->head= nullptr;
    this->next= nullptr;
    this->prev= nullptr;
    this->length=0;
}
void BoxList::fill15(int f)
{
    int col=0;
    while(true)
    {
        if(this->length==15)
        {
            break;
        }
        Chip* c= new Chip();
        c->setLetter(" ");
        this->add(col,f,c);
        length++;
        col++;
    }
}

int BoxList::getLength()
{
    return length;
}

BoxList *BoxList::getNext() {
    return this->next;
}

void BoxList::setNext(BoxList *b) {
    this->next=b;
}

void BoxList::add(int col, int f,Chip* c)
{
    Box* b= new Box(col,f," ",c);
    if(this->head== nullptr)
    {
        this->head=b;
    }
    else
    {
        Box* temp= this->head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(b);
        b->setPrev(temp);
        temp = nullptr;
        delete (temp);
    }
}
void BoxList::add_Box(Box v)
{
    Box* b= new Box();
    *b=v;
    if(this->head== nullptr)
    {
        this->head=b;
    }
    else
    {
        Box* temp= this->head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(b);
        b->setPrev(temp);
        temp = nullptr;
        delete (temp);
    }
    length++;
}
void BoxList::print()
{
    Box* temp=this->head;
    if(this->head== nullptr)
    {
        cout<<"[]"<<endl;
    }
    else
    {

        string f = "[";
        while (temp != nullptr) {
            if (f != "[") {
                f += ",";

            }
            f +=temp->getChip()->getLetter();
            temp = temp->getNext();
        }
        f += "]";
        temp= nullptr;
        delete(temp);
        cout<<f<<endl;
    }
}

Box *BoxList::getHead()
{
    return this->head;
}

BoxList *BoxList::getPrev()
{
    return this->prev;
}

void BoxList::setPrev(BoxList *b)
{
    this->prev=b;
}

bool BoxList::in(int f, int c) {
    Box*temp=this->getHead();
    while(temp!= nullptr)
    {
        if(temp->getLine()==f&&temp->getColumn()==c)
        {
            return true;
        }
        temp=temp->getNext();
    }
    return false;
}

Box *BoxList::get(int f, int c) {
    Box*temp=this->getHead();
    while(temp!= nullptr)
    {
        if(temp->getLine()==f&&temp->getColumn()==c)
        {
            return temp;
        }
        temp=temp->getNext();
    }
    return nullptr;
}

