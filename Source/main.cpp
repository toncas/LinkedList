#include <iostream>
#include "../Headers/LinkedList.h"
#include "../Headers/Utilities.h"

using namespace std;

int main() {
    LinkedList list, listFromArray;
    vector<int> testArray = {0, 8, 12, 23, 54, 55, 66, 66, 66, 90};

    list = Utilities::insertTestList(20);
    list.printList();
    cout << endl;

    cout << "Head: " << list.getHead() << endl;
    cout << "Tail: " << list.getTail() << endl;
    cout << "Size: " << list.Size() << endl;
    cout << "isSorted: " << list.checkSorted() << endl;


    list.deleteNode(9);
    list.deleteNode(0);
    list.printList();
    cout << endl;

    cout << "Head: " << list.getHead() << endl;
    cout << "Tail: " << list.getTail() << endl;
    cout << "Size: " << list.Size() << endl;
    cout << "isSorted: " << list.checkSorted() << endl;

    cout << endl;

    cout << "Testing std::vector to Linked List Conversion...." << endl;
    listFromArray = Utilities::vectorToLinkedList(testArray);

    listFromArray.printList();
    cout << endl;

    cout << "Head: " << listFromArray.getHead() << endl;
    cout << "Tail: " << listFromArray.getTail() << endl;
    cout << "Size: " << listFromArray.Size() << endl;
    cout << "isSorted: " << listFromArray.checkSorted() << endl;
    cout << endl;

    cout << "Testing Insert to sorted Node Conversion...." << endl;
    listFromArray.addNodeSorted(-1);
    listFromArray.addNodeSorted(66);
    listFromArray.addNodeSorted(34);
    listFromArray.addNodeSorted(35);
    listFromArray.addNodeSorted(101);

    listFromArray.printList();
    cout << endl;

    cout << "Head: " << listFromArray.getHead() << endl;
    cout << "Tail: " << listFromArray.getTail() << endl;
    cout << "Size: " << listFromArray.Size() << endl;
    cout << "isSorted: " << listFromArray.checkSorted() << endl;

    cout << "Testing reversing linked list...." << endl;
    listFromArray.reverseList();
    listFromArray.printList();
    cout << endl;

    cout << "Head: " << listFromArray.getHead() << endl;
    cout << "Tail: " << listFromArray.getTail() << endl;
    cout << "Size: " << listFromArray.Size() << endl;
    cout << "isSorted: " << listFromArray.checkSorted() << endl;

    return 0;
}