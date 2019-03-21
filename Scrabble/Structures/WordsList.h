//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_LINKEDLIST_H
#define PROYECTO_1_CLIENT_LINKEDLIST_H

#include <string.h>
#include <iostream>
#include "NodeW.h"

using namespace std;


class WordsList {
private:
    NodeW* head;
    int length;
public:
    WordsList();
    int getLength();
    Chip* get(string s);
    void add(Chip* c);
    void del(string s);
    void print();

};


#endif //PROYECTO_1_CLIENT_LINKEDLIST_H
