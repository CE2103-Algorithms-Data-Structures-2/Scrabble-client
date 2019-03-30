//
// Created by dcamachog1501 on 20/03/19.
//

#ifndef PROYECTO_1_CLIENT_MATRIX_H
#define PROYECTO_1_CLIENT_MATRIX_H


#include "Structures/WordsList.h"

class Matrix {
private:
    WordsList* head;

public:
    Matrix();
    void init();
    void print();
    WordsList getLine(int i);




};


#endif //PROYECTO_1_CLIENT_MATRIX_H
