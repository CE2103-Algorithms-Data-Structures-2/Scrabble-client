//
// Created by dcamachog1501 on 20/03/19.
//

#include "Matrix.h"

Matrix::Matrix()
    {
        this->head= nullptr;
    }

void Matrix::init()
    {
        for(int i=0;i<15;i++)
        {
            WordsList* w= new WordsList;
            w->fill15();
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
            }
        }
        print();
    }

void Matrix::print()
{
    WordsList* temp= this->head;
    while(temp!= nullptr)
    {
        temp->print();
        temp=temp->getNext();
    }
}

WordsList Matrix::getLine(int i) {
    return WordsList();
}

