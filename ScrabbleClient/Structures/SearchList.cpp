//
// Created by dcamachog1501 on 03/04/19.
//

#include "SearchList.h"
SearchList::SearchList()
{
    this->head= nullptr;
    this->length=0;
}

WordsList *SearchList::getHead() {
    return this->head;
}

int SearchList::getlenth() {
    return this->length;
}

void SearchList::add(WordsList* w)
{
    w->setWord(w->getWord());
    if(this->head== nullptr)
    {
        this->head=w;
    }
    else
    {
        WordsList* temp=this->head;
        while(temp->getNext()!= nullptr)
        {
            temp=temp->getNext();
        }
        temp->setNext(w);
        temp= nullptr;
        delete(temp);
    }
    length++;
}

void SearchList::del(WordsList *w)
{
    if(length!=0) {
        if ((head->getCfinal()==w->getCfinal()&&(head->getFfinal()==w->getFfinal()))){
            WordsList* temp = head;
            head = temp->getNext();
            temp= nullptr;
            delete temp;

        }
        else {
            WordsList *temp = this->head;
            while (((temp->getNext()->getCfinal()!=w->getCfinal())||(temp->getNext()->getFfinal()!=w->getFfinal()))&&(temp->getNext() != nullptr)) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                WordsList *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2=nullptr;
                temp= nullptr;
                delete(temp);
                delete temp2;
            }
        }
        length--;
    }
}

void SearchList::purge()
{
    WordsList* temp= this->head;
    while(temp!= nullptr)
    {
        if (times(temp->getFinicial(), temp->getCinicial(), temp->getFfinal(), temp->getCfinal()) > 1) {
            del(temp);
            temp = this->head;
        } else {
            temp = temp->getNext();
        }
    }
}

void SearchList::print() {
    string out="[";
    WordsList* temp=this->head;
    while(temp!= nullptr)
    {
        out+=temp->getWord();
        if(temp->getNext()!= nullptr)
        {
            out+=",";
        }
        temp=temp->getNext();
    }
    out+="]";
    cout<<out<<endl;
}

int SearchList::times(int fi,int ci,int ff,int cf) {
    int i=0;
    WordsList* temp=this->head;
    while(temp!= nullptr)
    {
        if((temp->getFinicial()==fi)&&(temp->getCinicial()==ci)&&(temp->getFfinal()==ff)&&(temp->getCfinal()==cf))
        {
            i++;
        }
        temp=temp->getNext();
    }
    return i;
}

