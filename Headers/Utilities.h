//
// Created by Antonio Castro on 8/7/17.
//

#ifndef LINKEDLIST_UTILITES_H
#define LINKEDLIST_UTILITES_H


#include <vector>
#include "LinkedList.h"

class Utilities {
public:
    static LinkedList insertTestList(int size);
    static LinkedList vectorToLinkedList(std::vector<int> input);

private:
    //Disallow instantiation of this class
    Utilities(){}
};


#endif //LINKEDLIST_UTILITES_H
