//
// Created by Antonio Castro on 8/7/17.
//
#include<iostream>
#include "../Headers/Utilities.h"

LinkedList Utilities::insertTestList(int size) {
    auto *output = new LinkedList();

    for(int i = 0; i < size; i++){
        output->addNode(i);
    }

    return *output;
}

LinkedList Utilities::vectorToLinkedList(std::vector<int> input) {

    auto *output = new LinkedList();

    for(auto &element : input){
        output->addNode(element);
    }

    return *output;
}