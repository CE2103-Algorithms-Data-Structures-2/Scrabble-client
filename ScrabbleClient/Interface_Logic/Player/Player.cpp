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
    host=new bool(false);
}
Player::Player(string n) {
    this->chips= new WordsList();
    this->name=" ";
    this->points=new int(0);
    this->turn=new bool(false);
    this->rndChip= new Chip();
    this->ID=" ";
    host=new bool(false);

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
void Player::addPoints(int p)
{
    this->points+=p;
}

void Player::setHost() {
    *host=true;
}

bool Player::isHost() {
    return host;
}
