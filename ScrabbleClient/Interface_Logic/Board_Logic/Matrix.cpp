//
// Created by dcamachog1501 on 20/03/19.
//

#include "Matrix.h"
#include "../../Structures/BoxList.h"

Matrix::Matrix()
    {
        this->head= nullptr;
    }

void Matrix::init()
    {
        for(int i=0;i<15;i++)
        {
            BoxList* bl = new BoxList();
            bl->fill15(i);
            if(this->head== nullptr)
            {
                this->head=bl;
            }
            else
            {
                BoxList* temp=this->head;
                while(temp->getNext()!= nullptr)
                {
                    temp=temp->getNext();
                }
                temp->setNext(bl);
            }
        }
        print();
    }

void Matrix::print()
{
    BoxList* temp= this->head;
    while(temp!= nullptr)
    {
        temp->print();
        temp=temp->getNext();
    }
    cout<<""<<endl;
}

void Matrix::addWord(int f, int c, string dir,WordsList l)
{
    if(dir.compare("D")==0)
    {
       Box* temp=this->get(f,c);
       NodeW* templ= l.getHead();
       while(true)
       {
           if(f==15||c<0||templ== nullptr)
           {
               break;
           }
           temp->getChip()->setLetter(templ->getChip()->getLetter());
           f++;
           temp=get(f,c);
           templ=templ->getNext();
       }
    }
    else if(dir.compare("U")==0)
    {

    }
    else if(dir.compare("R")==0)
    {
        Box* temp=this->get(f,c);
        NodeW* templ= l.getHead();
        while(true)
        {
            if(c==15||c<0||templ== nullptr)
            {
                break;
            }
            temp->getChip()->setLetter(templ->getChip()->getLetter());
            c++;
            temp=get(f,c);
            templ=templ->getNext();
        }
    }
    else if(dir.compare("L")==0)
    {

    }
    print();
}

Box *Matrix::get(int f, int c)
{
    BoxList* temp=this->head;
    while(true)
    {
        if(temp== nullptr||temp->getHead()->getLine()==f)
        {
            break;
        }
        temp=temp->getNext();
    }
    if(temp!= nullptr) {
        Box *temp2 = temp->getHead();
        while (temp2->getColumn() != c) {
            temp2 = temp2->getNext();
            if (temp2 == nullptr) {
                break;
            }
        }
        return temp2;
    }
    return nullptr;
}

BoxList *Matrix::getHead() {
    return this->head;
}

