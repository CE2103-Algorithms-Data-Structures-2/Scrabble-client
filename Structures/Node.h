//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NODE_H
#define PROYECTO_1_CLIENT_NODE_H

#include <string>
using namespace std;
class Node {
    private:
        Node* next;
        string value;
    public:
        Node(string s);
        string getValue();
        Node* getNext();
        void setNext(Node* n);
        void setValue(string s);
};


#endif //PROYECTO_1_CLIENT_NODE_H
