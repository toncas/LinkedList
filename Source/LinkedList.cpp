//
// Created by Antonio Castro on 8/5/17.
//

#include <cstdlib>
#include <iostream>
#include <vector>

#include "../Headers/LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
    isSorted = false;

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
    setSorted();
}

void LinkedList::deleteNode(int index) {
    /*
     * 1.) Does the index exist?
     * 2.) Traverse to the index
     * 3.) 'remove' the node from the list
     * 4.) rearrange the list (reattach pointers in the correct order
     */
    if(index >= size){
        setSorted();
        return;
    }

    Node *prev, *next;
    Node *temp = head;
    prev = nullptr;
    next = head->next;

    //If index to be removed is the head
    if(index == 0){
        head = head->next;
        temp->next = nullptr;
        size--;
        setSorted();
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
    setSorted();
    return;

}

void LinkedList::printList() {

    if(head == nullptr) {
        return;
    }

    Node *temp = head;
    while(true){
        std::cout << temp->data << " ";

        if(temp->next == nullptr){
            break;
        }

        temp = temp->next;
    }
}

void LinkedList::addNodeSorted(int data) {

    Node *temp = head;
    Node *prev = nullptr;

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if(!isSorted){ //if the list is not sorted.
        std::cout << "List isn't sorted" << std::endl;
        return;
    }
    else if(size == 0) { //if it is an empty list
        addNode(data);
        size++;
    }
    else if(head->data >= data){ //the node needs to be prepended to the head of the list
        newNode->next = head;
        head = newNode;
        size++;
    }
    else if(tail->data <= data){ //if node needs to be appended to the tail of the list
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    else{ //Normal operation
        while(temp->data < data){
            prev = temp;
            temp = temp->next;
        }
        newNode->next = temp;
        prev->next = newNode;
        size++;
    }


}

bool LinkedList::checkSorted() {
    setSorted();
    return isSorted;
}

void LinkedList::reverseList() {

    Node *prev = nullptr;
    Node *curr = head;
    Node * next;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    tail = head;
    head = prev;
    setSorted();
}

int LinkedList::getHead() {

    return head->data;

}

int LinkedList::getTail() {

    return tail->data;

}

int LinkedList::getData(int index) {

    if(index < 0){
        return NULL;
    }

    Node *h = head;
    int i = 0;

    while(h != nullptr && i < index){
        i++;
        h = h->next;
    }
    return h->data;

}

int LinkedList::Size() {
    int listSize = 0;

    if(head == nullptr)
    {
        return listSize;
    }

    Node *temp = head;

    while(temp != nullptr){
        listSize++;
        temp = temp->next;
    }

    return listSize;
}

void LinkedList::sort() {
    /*Im not sure how to do this in constant space...
     * At the moment this is what I have:
     * 1. For each node store the data into a vector
     * 2. sort the vector
     * 3. for each entry in the vector, overwrite the data for each node
     * */

    std::vector<int> nodeListVector;
    Node *temp = head;

    while(temp != nullptr){
        nodeListVector.push_back(temp->data);
        temp = temp->next;
    }
    std::sort(nodeListVector.begin(), nodeListVector.end());

    temp = head;
    for(int i = 0; i < nodeListVector.size(); i++){
        temp->data = nodeListVector[i];
        temp = temp->next;
    }
}

/**Private Functions*/

//Checks to see if the array is sorted and sets the private member 'isSorted' accordingly
void LinkedList::setSorted() {
    int check;
    Node* temp = head;

    while(temp->next != nullptr){
        check = temp->data;
        if(temp->next->data < check){
            isSorted = false;
            return;
        }

        temp = temp->next;
    }
    isSorted = true;
}