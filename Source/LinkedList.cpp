//
// Created by Antonio Castro on 8/5/17.
//

#include <cstdlib>
#include <iostream>

#include "../Headers/LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    temp = nullptr;
    size = 0;

}

//This will add a node to the end of the linked list
void LinkedList::addNode(int data) {
    Node* newNode = new Node;

    newNode->data = data;
    newNode->next = nullptr;

    if(head != nullptr) {
        tail->next = newNode;
        tail = newNode;
    }
    else{
        head = newNode;
        tail = newNode;
    }
    size++;
}

void LinkedList::deleteNode(int index) {
    /*
     * 1.) Does the index exist?
     * 2.) Traverse to the index
     * 3.) 'remove' the node from the list
     * 4.) rearrange the list
     */
    if(index >= size){
        return;
    }

    Node *prev, *next;
    temp = head;
    prev = nullptr;
    next = head->next;

    //If index to be removed is the head or tail
    if(index == 0){
        head = head->next;
        temp->next = nullptr;
        size--;
        return;
    }

    for(int i = 0; i < index; i++){
        prev = temp;
        temp = temp->next;
        next = temp->next;
    }

    //if temp is pointing to the tail node
    if(temp == tail){
        tail = prev;
        tail->next = nullptr;
    }
    else{
        prev->next = next;
        temp->next = nullptr;
    }

    size--;
    return;

}

void LinkedList::printList() {

    if(head == nullptr) {
        return;
    }

    temp = head;
    while(true){
        cout << temp->data << " ";

        if(temp->next == nullptr){
            break;
        }

        temp = temp->next;
    }
}

void LinkedList::addNodeSorted() {

}

void LinkedList::reverseList() {

}

int LinkedList::getHead() {

    return head->data;

}

int LinkedList::getTail() {

    return tail->data;

}

int LinkedList::Size() {
    return size;
}