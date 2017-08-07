//
// Created by Antonio Castro on 8/7/17.
//

#include "../Headers/Utilites.h"

LinkedList Utilites::insertTestList(int size) {
    LinkedList *output = new LinkedList();

    for(int i = 0; i < size; i++){
        output->addNode(i);
    }

    return *output;
}