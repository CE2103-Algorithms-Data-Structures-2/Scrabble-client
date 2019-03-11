//
// Created by dcamachog1501 on 10/03/19.
//

#include "LinkedList.h"
LinkedList::LinkedList()
{
    this->head=nullptr;
    this->lenght=0;
}
int LinkedList::getLenght()
{
    return this->lenght;
}
void LinkedList::add(string s)
{
    Node* n= new Node(s);
    Node* temp= this->head;
    while(temp->getNext()!=nullptr)
    {
        temp=temp->getNext();
    }
    temp->setNext(n);
}
void LinkedList::del(string s)
{
    if(lenght!=0) {
        if (head->getValue() == s) {
            Node *temp = head;
            head = temp->getNext();
            delete temp;

        }
        else {
            Node *temp = this->head;
            while (temp->getNext()->getValue() != s && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                Node *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                delete temp2;
            }
        }
        lenght--;
    }
}
string LinkedList::get(string s)
{
    Node* temp=head;
    while(temp->getValue()!=s)
    {
        temp=temp->getNext();
    }
    cout<<temp->getValue()<<endl;
    return temp->getValue();
}
string LinkedList::print()
{
    Node* temp=this->head;
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