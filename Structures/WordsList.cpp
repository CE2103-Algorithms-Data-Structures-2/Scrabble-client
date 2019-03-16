//
// Created by dcamachog1501 on 10/03/19.
//

#include "WordsList.h"
WordsList::WordsList()
{
    this->head=nullptr;
    this->length=0;
}
int WordsList::getLength()
{
    return this->length;
}
void WordsList::add(string s)
{
    NodeW* n= new NodeW(s);
    NodeW* temp= this->head;
    while(temp->getNext()!=nullptr)
    {
        temp=temp->getNext();
    }
    temp->setNext(n);
}
void WordsList::del(string s)
{
    if(length!=0) {
        if (head->getValue() == s) {
            NodeW *temp = head;
            head = temp->getNext();
            delete temp;

        }
        else {
            NodeW *temp = this->head;
            while (temp->getNext()->getValue() != s && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                NodeW *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                delete temp2;
            }
        }
        length--;
    }
}
string WordsList::get(string s)
{
    NodeW* temp=head;
    while(temp->getValue()!=s)
    {
        temp=temp->getNext();
    }
    cout<<temp->getValue()<<endl;
    return temp->getValue();
}
string WordsList::print()
{
    NodeW* temp=this->head;
    if(this->head== nullptr)
    {
        return "[]";
    }
    else
    {

        string f = "[";
        while (temp != nullptr) {
            if (f != "[") {
                f += ",";

            }
            f +=temp->getValue();
            temp = temp->getNext();
        }
        f += "]";
        return f;
    }
}