//
// Created by dcamachog1501 on 09/03/19.
//
#include"../Client/Client.h"
#include "Manager.h"
#include <thread>
using namespace std;

Manager::Manager()
{
    this->cliente=Client();
    this->Init();
};
void Manager::Init()
{
    cliente.run();
}