//
// Created by Antonio Castro on 8/5/17.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H


class LinkedList {

private:

    struct Node{
        int data;
        Node* next;
    };

    Node *head, *tail;
    int size;
    bool isSorted;
    void setSorted();

public:

    /*constructor*/
    LinkedList();

    void addNode(int data);
    void deleteNode(int index);
    void printList();
    void reverseList();
    void addNodeSorted(int data);
    void sort();

    /*getters & setters*/
    int getHead();
    int getData(int index);
    int getTail();
    int Size();
    bool checkSorted();


};


#endif //LINKEDLIST_LINKEDLIST_H
