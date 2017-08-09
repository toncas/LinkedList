#include <iostream>
#include "../Headers/LinkedList.h"
#include "../Headers/Utilites.h"

using namespace std;

int main() {
    LinkedList list;

    list = Utilites::insertTestList(20);
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

    return 0;
}