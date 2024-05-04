#include <iostream>
#include "Linkedlist.h"
using namespace std;

int main(){
    LinkedList list; //Creating an object list of the class Node i.e creating a linked list
    list.addToHead(1);//adding 1 to the head
    list.addToHead(8);//adding 8 to the head
    list.addToTail(7); //adding 7 to the tail
    list.addToTail(9); //adding 9 to the tail
    list.printlist();
    list.search(6); //searcing for the info 6
    list.search(7); //searching for the info 7
    list.removeFromHead();
    list.removeFromTail();
    list.traverse();
    Node* outputPtr; // Pointer to store the address of the node containing the data
    bool found = list.retrieve(7, &outputPtr); // Call the retrieve function and search for 7
    // Checking if the data was found
    if (found) {
        cout << "Data found: " << outputPtr->info << endl;
    } else {
        cout << "Data not found" << endl;
    }
}
