//
// Created by dcamachog1501 on 25/03/19.
//

#include <iostream>
#include "BoxList.h"
BoxList::BoxList()
{
    this->head= nullptr;
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
    Box* b= new Box(col,f,"",c);
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
        temp = nullptr;
        delete (temp);
    }
}

void BoxList::del(int f, int c)
{
    {
        if(length!=0) {
            if ((head->getColumn()==c)&&(head->getLine()==f)) {
                Box *temp = head;
                head = temp->getNext();
                temp= nullptr;
                delete temp;

            }
            else {
                Box *temp = this->head;
                while (((temp->getLine()!=f)&&temp->getColumn()!=c)&& temp->getNext() != nullptr) {
                    temp = temp->getNext();
                }
                if (temp->getNext() != nullptr) {
                    Box*temp2 = temp->getNext();
                    temp->setNext(temp->getNext()->getNext());
                    temp2->setNext(nullptr);
                    temp= nullptr;
                    temp2=nullptr;
                    delete(temp);
                    delete temp2;
                }
            }
            length--;
        }
    }
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

