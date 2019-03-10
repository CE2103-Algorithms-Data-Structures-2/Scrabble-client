//
// Created by dcamachog1501 on 09/03/19.
//

#ifndef PROYECTO_1_CLIENT_MANAGER_H
#define PROYECTO_1_CLIENT_MANAGER_H


#include "../Client/Client.h"

class Manager{
private:
    Client cliente;
    bool running;
public:
    Manager();
    void Init();

};


#endif //PROYECTO_1_CLIENT_MANAGER_H
