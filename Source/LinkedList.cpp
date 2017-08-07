//
// Created by Antonio Castro on 8/5/17.
//

#include <cstdlib>
#include <iostream>

#include "../Headers/LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
    temp = NULL;

}

//This will add a node to the end of the linked list
void LinkedList::addNode(int data) {
    Node* newNode = new Node;

    newNode->data = data;
    newNode->next = NULL;

    if(head != NULL) {
        tail->next = newNode;
        tail = newNode;
    }
    else{
        head = newNode;
        tail = newNode;
    }
}

void LinkedList::deleteNode(int index) {

}

void LinkedList::printList() {

    if(head == NULL) {
        return;
    }

    temp = head;
    while(true){
        cout << temp->data << " ";

        if(temp->next == NULL){
            break;
        }

        temp = temp->next;
    }
}

void LinkedList::addNodeSorted() {

}

void LinkedList::reverseList() {

}
