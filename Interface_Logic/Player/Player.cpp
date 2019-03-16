//
// Created by dcamachog1501 on 10/03/19.
//

#include "Player.h"
Player::Player()
{
    turn= new bool(false);
    this->name= new string("");
    this->points=new int(0);
    this->chips= new WordsList();
    this->ID= new int(0);
}
Player::Player(string n) {
    this->chips= new WordsList();
    this->name=new string(n);
    this->points=new int(0);
    this->turn=new bool(false);
    this->ID=new int(0);

}
WordsList* Player::getChips()
{
    return this->chips;
}
int* Player::getPoints()
{
    return this->points;
}
string* Player::getName()
{
    return this->name;
}
void Player::setTurn()
{
    *turn=!*turn;
}

void Player::setID(int i)
{
    *ID=i;

}
int* Player::getID()
{
    return this->ID;
}
void Player::print()
{
    cout<<"Nombre: "<<*name<<endl;
    cout<<"ID: "<<*ID<<endl;
}

void Player::setName(string n)
{
    *name=n;
}
