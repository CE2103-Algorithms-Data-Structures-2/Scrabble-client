//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_LINKEDLIST_H
#define PROYECTO_1_CLIENT_LINKEDLIST_H

#include <string.h>
#include <iostream>
#include "Node.h"

using namespace std;


class LinkedList {
    private:
        Node* head;
        int lenght;
    public:
        LinkedList();
        int getLenght();
        string get(string s);
        void add(string s);
        void del(string s);
        string print();

};


#endif //PROYECTO_1_CLIENT_LINKEDLIST_H
