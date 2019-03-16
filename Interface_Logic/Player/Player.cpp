//
// Created by dcamachog1501 on 10/03/19.
//

#include "Player.h"
Player::Player()
{
    *turn= false;
    this->points=nullptr;
    this->chips= nullptr;
    this->ID= nullptr;
}
Player::Player(string n) {
    this->chips= nullptr;
    *name=n;
    *points=0;
    *turn=false;
    *ID=0;

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
