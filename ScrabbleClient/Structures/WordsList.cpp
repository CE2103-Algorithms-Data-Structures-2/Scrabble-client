//
// Created by dcamachog1501 on 10/03/19.
//

#include "WordsList.h"
#include "../Interface_Logic/Manager/Manager.h"

WordsList::WordsList()
{
    this->word="";
    this->head=nullptr;
    this->length=0;
    this->next= nullptr;
    Finicial=new int(0);
    Ffinal=new int(0);
    Cinicial=new int (0);
    Cfinal=new int(0);
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
    length++;
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

NodeW *WordsList::getHead()
{
    return this->head;
}

bool WordsList::writeAble(WordsList w)
{
    NodeW* temp=w.getHead();
    if(temp!= nullptr)
    {
        while(temp!= nullptr)
        {
            int local=times(temp->getChip()->getLetter(),w);
            int localp=times(temp->getChip()->getLetter(),*this);
            if(localp<local)
            {
                cout<<"No es posible armar la palabra indicada!"<<endl;
                delete(temp);
                return false;
            }
            temp=temp->getNext();
        }
        cout<<"Es posible armar la palabra!"<<endl;
        delete(temp);
        return true;

    }
}

int WordsList::times(string l,WordsList w) {
    int i=0;
    NodeW* temp=w.getHead();
    if(temp!= nullptr)
    {
        while(temp!= nullptr)
        {
            if(temp->getChip()->getLetter().compare(l)==0)
            {
                i++;
            }
            temp=temp->getNext();
        }
    }
    temp= nullptr;
    delete(temp);
    return i;
}
string WordsList::getWord()
{
    NodeW* temp= this->getHead();
    string out="";
    while(temp!= nullptr)
    {
        out+=temp->getChip()->getLetter();
        temp=temp->getNext();
    }
    delete(temp);
    return out;
}
void WordsList::removeSetOfLetters(WordsList w)
{
    NodeW* temp=w.getHead();
    while(temp!= nullptr)
    {
        this->del(temp->getChip()->getLetter());
        temp=temp->getNext();
    }
    temp=nullptr;
    delete(temp);
}
void WordsList::setInicio(int f,int c)
{
    *Finicial=f;
    *Cinicial=c;
}
void WordsList::setFinal(int f,int c)
{
    *Ffinal=f;
    *Cfinal=c;
}

int WordsList::getFinicial() {
    return *Finicial;
}

int WordsList::getFfinal() {
    return *Ffinal;
}

int WordsList::getCinicial() {
    return *Cinicial;
}

int WordsList::getCfinal() {
    return *Cfinal;
}

void WordsList::setWord(string w)
{
    this->word=w;
}

void WordsList::multiplyBy(int i)
{
    NodeW* temp=head;
    while(temp!= nullptr)
    {
        temp->getChip()->setPoints(temp->getChip()->getPoints()*i);
        temp=temp->getNext();
    }
}
int WordsList::getPoints() {
    int i=0;
    NodeW* temp=this->head;
    while(temp!= nullptr)
    {
        i+=temp->getChip()->getPoints();
        temp=temp->getNext();
    }
    return i;
}


