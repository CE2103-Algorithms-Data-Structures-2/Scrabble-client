//
// Created by dcamachog1501 on 10/03/19.
//

#ifndef PROYECTO_1_CLIENT_NODE_H
#define PROYECTO_1_CLIENT_NODE_H

#include <string>
using namespace std;
class NodeW {
    private:
        NodeW* next;
        string value;
    public:
        NodeW(string s);
        string getValue();
        NodeW* getNext();
        void setNext(NodeW* n);
        void setValue(string s);
};


#endif //PROYECTO_1_CLIENT_NODE_H
