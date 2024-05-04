#include "Linkedlist.h"
#include <iostream>
using namespace std;

void LinkedList::traverse()// displays the data of the node in the list
 {
    Node *newNode = HEAD;
    while (newNode != nullptr)// Traversing until the newNode points to the last node
     {
        cout << newNode->info << endl;//Printing the required info of the node
        newNode = newNode->next;
    }
}
void LinkedList::printlist()// displays the data of the node in the list
 {
    Node *newNode = HEAD;
    while (newNode != nullptr)// Traversing until the newNode points to the last node
     {
        cout << newNode->info << endl;//Printing the required info of the node
        newNode = newNode->next;
    }
}
bool LinkedList::isEmpty()//Checks if the Node is empty
 {
    return HEAD == nullptr;
}

void LinkedList::addToHead(int info)//adding node to Head
 {
    Node* newNode = new Node(info);
    newNode->info = info;
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == nullptr) {
        TAIL = newNode;
    }
}

void LinkedList::addToTail(int info) //adding node to tail
 {
    Node *newNode = new Node(info);
    if (TAIL == nullptr) {
        HEAD = newNode;
    } else {
        TAIL->next = newNode;
    }
    TAIL = newNode;
}

void LinkedList::removeFromHead()//removing info from head
{
    if (!isEmpty()) {
        Node* newNode = HEAD;
        HEAD = HEAD->next;
        delete newNode;
        if (HEAD == nullptr) {
            TAIL = nullptr;
        }
    }
}

void LinkedList::removeFromTail()//removing info from tail
 {
    if (!isEmpty()) {
        if (HEAD == TAIL) {
            delete HEAD;
            HEAD = TAIL = nullptr;
        } else {
            Node *pred = HEAD; //Creating a predecessor node pointer pointing to the HEAD of the linked list
            while (pred->next != TAIL)   //Traversing the predecessor pointer until the second last node of the linked list
             {
                pred = pred->next;
            }
            delete TAIL;
            TAIL = pred;
            TAIL->next = nullptr;
        }
    } else {
        cout << "Empty" << endl;

    }
}

void LinkedList::remove(int info)   //Traversing the predecessor pointer until the second last node of the linked list
{
    if (!isEmpty()) {
        if (HEAD->info == info) {
            removeFromHead();//calling the removeFromHead function to remove the info if found in head of the linked list
        } else 
        {
            Node* pred = HEAD;//creating a newNode pointer which points to the second node of the list
            Node* curr = HEAD->next;//creating a newNode pointer curr which points to the second node of the list
            while (curr != nullptr && curr->info != info) {
                pred = curr;
                curr = curr->next;
            }
            if (curr != nullptr) {
                pred->next = curr->next;
                if (curr == TAIL) {
                    TAIL = pred;
                }
                delete curr;
            } else {
                cout << "Info not found" << endl;
            }
        }
    } else {
        cout << "Empty" << endl;
    }
}

void LinkedList::search(int info) //Searches for the required data and returns true if it is found 
 {
    Node* newNode = HEAD;
    bool found = false;
    while (newNode != nullptr) {
        if (newNode->info == info) {
            cout << "Info found" << endl;
            found = true;
            break;
        }
        newNode = newNode->next;
    }
    if (!found) {
        cout << "Info not found" << endl;
    }
}

bool LinkedList::retrieve(int data, Node** outputPtr) {
    Node* p = HEAD;
    while (p != nullptr && p->info != data) //Traversing until the required info is found
     {
        p = p->next;
    }
    *outputPtr = p;
    //outputPtr to point to the node containing the data
    return (p != nullptr);
}

void LinkedList::addAfter(int existingInfo, int newInfo) {
    Node* newNode = new Node(newInfo); // Create a new node with the new information
    Node* p; // Pointer to traverse the list to find the node with existingInfo

    if (retrieve(existingInfo, &p)) { // Find the node with existingInfo
        newNode->next = p->next; // Set the next pointer of newNode to point to the next node of p
        p->next = newNode; // Set the next pointer of p to point to newNode
        if (p == TAIL) {
            TAIL = newNode; // Update TAIL if the new node is inserted after the last node
        }
    } else {
        cout << "Node with existing info not found" << endl;
        delete newNode; // If the node with existingInfo is not found, delete the newly created node
    }
}
