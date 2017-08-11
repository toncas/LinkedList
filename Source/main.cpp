#include <iostream>
#include "../Headers/LinkedList.h"
#include "../Headers/Utilities.h"

using namespace std;

int main() {
    LinkedList list, listFromArray;
    vector<int> testArray = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    list = Utilities::insertTestList(20);
    list.printList();
    cout << endl;

    cout << "Head: " << list.getHead() << endl;
    cout << "Tail: " << list.getTail() << endl;
    cout << "Size: " << list.Size() << endl;

    list.deleteNode(9);
    list.deleteNode(0);
    list.printList();
    cout << endl;

    cout << "Head: " << list.getHead() << endl;
    cout << "Tail: " << list.getTail() << endl;
    cout << "Size: " << list.Size() << endl;

    cout << endl;

    cout << "Testing Array to Linked List Conversion...." << endl;
    listFromArray = Utilities::vectorToLinkedList(testArray);

    listFromArray.printList();
    cout << endl;

    cout << "Head: " << listFromArray.getHead() << endl;
    cout << "Tail: " << listFromArray.getTail() << endl;
    cout << "Size: " << listFromArray.Size() << endl;

    return 0;
}