//
// Created by dcamachog1501 on 10/03/19.
//

#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player()
{
    turn= new bool(false);
    this->name=" ";
    this->points=new int(0);
    this->chips= new WordsList();
    this->ID= " ";
    this->rndChip= new Chip();
}
Player::Player(string n) {
    this->chips= new WordsList();
    this->name=" ";
    this->points=new int(0);
    this->turn=new bool(false);
    this->rndChip= new Chip();
    this->ID=" ";

}
WordsList* Player::getChips()
{
    return this->chips;
}
int* Player::getPoints()
{
    return this->points;
}
string Player::getName()
{
    return this->name;
}
void Player::setTurn()
{
    *turn=!*turn;
}

void Player::setID(string i)
{
    ID=i;

}
string Player::getID()
{
    return this->ID;
}
void Player::print()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Random chip: "<<rndChip->getLetter()<<endl;
}

void Player::setName(string n)
{
    this->name=n;
}

void Player::setRnd(Chip *c)
{
    this->rndChip=c;
}

Chip *Player::getRnd() {
    return this->rndChip;
}
