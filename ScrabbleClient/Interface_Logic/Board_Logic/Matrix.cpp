//
// Created by dcamachog1501 on 20/03/19.
//

#include <Structures/SearchList.h>
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
    if(f>14||f<0||c>14||c<0)
    {
        return nullptr;
    }
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
void Matrix::search(int filaIn,int columIn,int filaFin,int columFin)
{
    SearchList* found=new SearchList();
    Box* temp=get(filaIn,columIn);
    while(true)
    {
        if(temp->getChip()->getLetter().compare(" ")==0||temp==nullptr)
        {
            break;
        }
        if(hasUp(temp->getLine(),temp->getColumn()))
        {
            found->add(getUptoDown(temp->getLine(),temp->getColumn()));
        }
        if(hasDown(temp->getLine(),temp->getColumn())&&!hasUp(temp->getLine(),temp->getColumn()))
        {
            found->add(gettoDown(temp->getLine(),temp->getColumn()));
        }
        if(hasLeft(temp->getLine(),temp->getColumn()))
        {
            found->add(getLefttoRight(temp->getLine(),temp->getColumn()));
        }
        if(hasRight(temp->getLine(),temp->getColumn())&&!hasLeft(temp->getLine(),temp->getColumn()))
        {
            found->add(gettoRight(temp->getLine(),temp->getColumn()));
        }
        if(filaIn<filaFin)
        {
            temp=get(temp->getLine()+1,temp->getColumn());
        }
        if(columFin>columIn)
        {
            temp=get(temp->getLine(),temp->getColumn()+1);
        }
    }
    found->purge();
    cout<<"Palabras encontradas: \n"<<endl;
    found->print();
}
bool Matrix::hasDown(int f, int c)
{
    if(f>=14)
    {
        return false;
    }
    string down=get(f+1,c)->getChip()->getLetter();
    if(down.compare(" ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool Matrix::hasUp(int f, int c)
{
    if(f<=0)
    {
        return false;
    }
    string up=get(f-1,c)->getChip()->getLetter();
    if(up.compare(" ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool Matrix::hasLeft(int f, int c)
{
    if(c<=0)
    {
        return false;
    }
    Box* left=get(f,c-1);
    if(left->getChip()->getLetter().compare(" ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool Matrix::hasRight(int f, int c)
{
    if(c>=14)
    {
        return false;
    }
    Box* right=get(f,c+1);
    if(right->getChip()->getLetter().compare(" ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

WordsList *Matrix::getUptoDown(int f,int c) {
    Box* temp=get(f,c);
    while(hasUp(temp->getLine(),temp->getColumn()))
    {
        temp=get(temp->getLine()-1,temp->getColumn());
    }
    WordsList* found= gettoDown(temp->getLine(),temp->getColumn());
    return found;
}

WordsList *Matrix::gettoDown(int f, int c)
{
    WordsList* found= new WordsList();
    Box* temp=get(f,c);
    while(true)
    {
        Chip* chip=new Chip();
        chip->setLetter(temp->getChip()->getLetter());
        chip->setPoints(temp->getChip()->getPoints());
        chip->setSpecial(temp->getChip()->getPoints());
        if(!hasDown(temp->getLine(),temp->getColumn()))
        {
            found->add(chip);
            break;
        }
        found->add(chip);
        temp=get(temp->getLine()+1,temp->getColumn());
    }
    found->setInicio(f,c);
    found->setFinal(temp->getLine(),temp->getColumn());
    return found;
}

WordsList* Matrix::getLefttoRight(int f, int c)
{
    Box* temp=get(f,c);
    while(hasLeft(temp->getLine(),temp->getColumn()))
    {
        temp=temp->getPrev();
    }
    WordsList* found= gettoRight(temp->getLine(),temp->getColumn());

    return found;
}

WordsList *Matrix::gettoRight(int f, int c)
{
    WordsList* found= new WordsList();
    Box* temp=get(f,c);
    while(true)
    {
        Chip* chip=new Chip();
        chip->setLetter(temp->getChip()->getLetter());
        chip->setPoints(temp->getChip()->getPoints());
        chip->setSpecial(temp->getChip()->getPoints());
        if(!hasRight(temp->getLine(),temp->getColumn()))
        {
            found->add(chip);
            break;
        }
        found->add(chip);
        temp=temp->getNext();
    }
    found->setInicio(f,c);
    found->setFinal(temp->getLine(),temp->getColumn());
    return found;
}

