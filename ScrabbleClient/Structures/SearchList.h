//
// Created by dcamachog1501 on 03/04/19.
//

#ifndef SCRABBLECLIENT_SEARCHLIST_H
#define SCRABBLECLIENT_SEARCHLIST_H


#include "WordsList.h"
class WordsList;

class SearchList
{
    private:
        WordsList* head;
        int length;
    public:
        SearchList();
        WordsList* getHead();
        int getlength();
        void add(WordsList* w);
        void del(WordsList* w);
        void purge();
        void print();
        void printPoints();
        int times(int fi,int ci,int ff,int cf);
};


#endif //SCRABBLECLIENT_SEARCHLIST_H
