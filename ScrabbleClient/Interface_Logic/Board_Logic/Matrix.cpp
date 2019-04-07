//
// Created by dcamachog1501 on 20/03/19.
//

#include <Interface_Logic/Manager/Manager.h>
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
    l.setInicio(f,c);
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
            if(templ->getNext()== nullptr)
            {
                l.setFinal(f,c);
            }
            temp->getChip()->setLetter(templ->getChip()->getLetter());
            f++;
            temp=get(f,c);
            templ=templ->getNext();
        }
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
            if(templ->getNext()== nullptr)
            {
                l.setFinal(f,c);
            }
            temp->getChip()->setLetter(templ->getChip()->getLetter());
            c++;
            temp=get(f,c);
            templ=templ->getNext();
        }
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
SearchList* Matrix::search(int filaIn,int columIn,int filaFin,int columFin)
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
    return found;
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
    int multiplier=1;
    while(true)
    {
        Chip* chip=new Chip();
        chip->setLetter(temp->getChip()->getLetter());
        if(temp->getPerk().compare("tripleP")==0)
        {
            multiplier=3;
            chip->setPoints(temp->getChip()->getPoints());
        }
        else if(temp->getPerk().compare("dobleL")==0)
        {
            chip->setPoints(temp->getChip()->getPoints()*2);
        }
        else if(temp->getPerk().compare("tripleL")==0)
        {
            chip->setPoints(temp->getChip()->getPoints()*3);
        }
        else if(temp->getPerk().compare("dobleP")==0)
        {
            multiplier=2;
            chip->setPoints(temp->getChip()->getPoints());
        }
        else if(temp->getPerk().compare("norm")==0)
        {
            chip->setPoints(temp->getChip()->getPoints());
        }
        chip->setSpecial(temp->getChip()->isSpecial());
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
    found->multiplyBy(multiplier);
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
    int multiplier=1;
    while(true)
    {
        Chip* chip=new Chip();
        chip->setLetter(temp->getChip()->getLetter());
        if(temp->getPerk().compare("tripleP")==0)
        {
            multiplier=3;
            chip->setPoints(temp->getChip()->getPoints());
        }
        else if(temp->getPerk().compare("dobleL")==0)
        {
            chip->setPoints(temp->getChip()->getPoints()*2);
        }
        else if(temp->getPerk().compare("tripleL")==0)
        {
            chip->setPoints(temp->getChip()->getPoints()*3);
        }
        else if(temp->getPerk().compare("dobleP")==0)
        {
            multiplier=2;
            chip->setPoints(temp->getChip()->getPoints());
        }
        else if(temp->getPerk().compare("norm")==0)
        {
            chip->setPoints(temp->getChip()->getPoints());
        }
        chip->setSpecial(temp->getChip()->isSpecial());
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
    found->multiplyBy(multiplier);
    return found;
}
void Matrix::setSpecial()
{
    BoxList* b= new BoxList();
    Box box= Box();
    box.setCoords(0,0);
    box.setPerk("tripleP");
    b->add_Box(box);
    box.setCoords(0,7);
    b->add_Box(box);
    box.setCoords(0,14);
    b->add_Box(box);
    box.setCoords(7,0);
    b->add_Box(box);
    box.setCoords(7,14);
    b->add_Box(box);
    box.setCoords(14,0);
    b->add_Box(box);
    box.setCoords(14,7);
    b->add_Box(box);
    box.setCoords(14,14);
    b->add_Box(box);
    box.setPerk("dobleL");
    box.setCoords(0,3);
    b->add_Box(box);
    box.setCoords(7,7);
    b->add_Box(box);
    box.setCoords(0,11);
    b->add_Box(box);
    box.setCoords(2,6);
    b->add_Box(box);
    box.setCoords(2,8);
    b->add_Box(box);
    box.setCoords(3,0);
    b->add_Box(box);
    box.setCoords(3,7);
    b->add_Box(box);
    box.setCoords(3,14);
    b->add_Box(box);
    box.setCoords(6,2);
    b->add_Box(box);
    box.setCoords(6,6);
    b->add_Box(box);
    box.setCoords(6,8);
    b->add_Box(box);
    box.setCoords(6,12);
    b->add_Box(box);
    box.setCoords(7,3);
    b->add_Box(box);
    box.setCoords(7,11);
    b->add_Box(box);
    box.setCoords(8,2);
    b->add_Box(box);
    box.setCoords(8,6);
    b->add_Box(box);
    box.setCoords(8,8);
    b->add_Box(box);
    box.setCoords(8,12);
    b->add_Box(box);
    box.setCoords(11,0);
    b->add_Box(box);
    box.setCoords(11,7);
    b->add_Box(box);
    box.setCoords(11,14);
    b->add_Box(box);
    box.setCoords(12,6);
    b->add_Box(box);
    box.setCoords(12,8);
    b->add_Box(box);
    box.setCoords(14,3);
    b->add_Box(box);
    box.setCoords(14,11);
    b->add_Box(box);
    box.setPerk("tripleL");
    box.setCoords(1,5);
    b->add_Box(box);
    box.setCoords(1,9);
    b->add_Box(box);
    box.setCoords(5,1);
    b->add_Box(box);
    box.setCoords(5,5);
    b->add_Box(box);
    box.setCoords(5,9);
    b->add_Box(box);
    box.setCoords(5,13);
    b->add_Box(box);
    box.setCoords(9,1);
    b->add_Box(box);
    box.setCoords(9,5);
    b->add_Box(box);
    box.setCoords(9,9);
    b->add_Box(box);
    box.setCoords(9,13);
    b->add_Box(box);
    box.setCoords(13,5);
    b->add_Box(box);
    box.setCoords(13,9);
    b->add_Box(box);
    box.setPerk("dobleP");
    box.setCoords(1,1);
    b->add_Box(box);
    box.setCoords(2,2);
    b->add_Box(box);
    box.setCoords(3,3);
    b->add_Box(box);
    box.setCoords(4,4);
    b->add_Box(box);
    box.setCoords(10,10);
    b->add_Box(box);
    box.setCoords(11,11);
    b->add_Box(box);
    box.setCoords(12,12);
    b->add_Box(box);
    box.setCoords(13,13);
    b->add_Box(box);
    box.setCoords(13,1);
    b->add_Box(box);
    box.setCoords(12,2);
    b->add_Box(box);
    box.setCoords(11,3);
    b->add_Box(box);
    box.setCoords(10,4);
    b->add_Box(box);
    box.setCoords(4,10);
    b->add_Box(box);
    box.setCoords(3,11);
    b->add_Box(box);
    box.setCoords(2,12);
    b->add_Box(box);
    box.setCoords(1,13);
    b->add_Box(box);

    BoxList* temp=this->head;
    while(temp!= nullptr)
    {
        Box* temp2=temp->getHead();
        while(temp2!= nullptr)
        {

            if(b->in(temp2->getLine(),temp2->getColumn()))
            {
                temp2->setPerk(b->get(temp2->getLine(),temp2->getColumn())->getPerk());
            }
            else
            {
                temp2->setPerk("norm");
            }
            temp2=temp2->getNext();
        }
        temp=temp->getNext();
        temp2= nullptr;
        delete(temp2);
    }
    temp= nullptr;
    delete(temp);


}

void Matrix::assignLetters()
{
    BoxList* temp=this->head;
    while(temp!= nullptr)
    {
        Box* temp2=temp->getHead();
        while(temp2!= nullptr)
        {
            if(!(temp2->getChip()->getLetter().compare(" ")==0))
            {
                string value = Manager::Jmanager->askFor(letters, temp2->getChip()->getLetter());
                temp2->getChip()->setPoints(stoi(value));
            }
            temp2=temp2->getNext();
        }
        temp=temp->getNext();
    }
}

void Matrix::addLine(BoxList b)
{
    BoxList* temp=head;
    if(temp== nullptr)
    {
        BoxList* bl=new BoxList();
        *bl=b;
        head=bl;
    }
    else
    {
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        BoxList *bl = new BoxList();
        *bl = b;
        temp->setNext(bl);
        temp = nullptr;

    }
    delete (temp);

}

Matrix Matrix::copy()
{
    Matrix m= Matrix();
    BoxList* temp=head;
    while(temp!= nullptr)
    {
        Box* temp2=temp->getHead();
        BoxList b= BoxList();
        while(temp2!= nullptr)
        {
            Box temp3= Box();
            temp3.setCoords(temp2->getLine(),temp2->getColumn());
            temp3.setPerk(temp2->getPerk());
            Chip* c= new Chip();
            c->setPoints(temp2->getChip()->getPoints());
            c->setLetter(temp2->getChip()->getLetter());
            c->setSpecial(temp2->getChip()->isSpecial());
            temp3.setChip(c);
            b.add_Box(temp3);
            temp2=temp2->getNext();
        }
        m.addLine(b);
        temp=temp->getNext();
    }
    return m;
}

