//
// Created by Antonio Castro on 8/7/17.
//

#ifndef LINKEDLIST_UTILITES_H
#define LINKEDLIST_UTILITES_H


#include "LinkedList.h"

class Utilites {
public:
    static LinkedList insertTestList(int size);
    static LinkedList arrayToLinkedList(int arrayInput[]);

private:
    //Disallow instantiation of this class
    Utilites(){}
};


#endif //LINKEDLIST_UTILITES_H
