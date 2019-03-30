//
// Created by dcamachog1501 on 10/03/19.
//

#include "WordsList.h"
WordsList::WordsList()
{
    this->head=nullptr;
    this->length=0;
    this->next= nullptr;
}
int WordsList::getLength()
{
    return this->length;
}
void WordsList::add(Chip* c)
{
    NodeW* n= new NodeW(c);
    if(this->head== nullptr)
    {
        this->head=n;
    }
    else
    {
        NodeW* temp= this->head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(n);
        temp = nullptr;
        delete (temp);
    }
}
void WordsList::del(string s)
{
    if(length!=0) {
        if (head->getChip()->getLetter()== s) {
            NodeW *temp = head;
            head = temp->getNext();
            temp= nullptr;
            delete temp;

        }
        else {
            NodeW *temp = this->head;
            while (temp->getNext()->getChip()->getLetter() != s && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                NodeW *temp2 = temp->getNext();
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
Chip* WordsList::get(string s)
{
    NodeW* temp=head;
    while(temp->getChip()->getLetter()!=s)
    {
        temp=temp->getNext();
    }
    return temp->getChip();
}

void WordsList::print()
{
    NodeW* temp=this->head;
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

WordsList *WordsList::getNext() {
    return this->next;
}

void WordsList::setNext(WordsList* w)
{
    this->next=w;
}

void WordsList::fill15()
{
    while(true)
    {
        if(this->length==15)
        {
            break;
        }
        Chip* c= new Chip();
        this->add(c);
        length++;
    }
}
