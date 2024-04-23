#include <iostream>
#include "linkedlist.h"
using namespace std;

void LinkedList::printlist()// It displays the data of the node in the list
        {
            Node * newNode = HEAD;
            while(newNode!=NULL){ //Traversing until the newNode points to the last node
                 cout<<newNode->info<<endl; //Printing the required info of the node.
                 newNode = newNode->next;
            }
        }
bool LinkedList::isEmpty(){ //Checks if the Node is empty
    if (HEAD==NULL){
        return true; //returns true if it is empty
    }
    else{
        return false;//returns false if it is not empty
    }
}

void LinkedList::addToHead(int info){ //adding node from Head
    Node* newNode = new Node(info);
    newNode->info=info; 
    newNode->next = HEAD;
    HEAD = newNode;
    if(TAIL==NULL){
        TAIL = newNode;
    }
}

void LinkedList::addToTail(int info){ //adding node from Tail
    Node *newNode = new Node(info);
    if(TAIL==NULL){
        HEAD = newNode;
        newNode->info = info;
        newNode->next = NULL;
        TAIL = newNode;
    }
    else{
        newNode->info = info;
        newNode->next = NULL;
        TAIL->next = newNode;
        TAIL = newNode;
    }
}
void LinkedList::traverse(){ //Traversing the given linked list
            Node* newNode = HEAD;
            while (newNode->next!=NULL)
            {
                newNode=newNode->next;
            }
}

void LinkedList::removeFromHead(){ //Removing node from head
    Node* newNode = HEAD;
    HEAD = HEAD->next;
    delete newNode;
}

void LinkedList::removeFromTail(){ //Removing from TAIL
    if(!isEmpty()){
        Node* newNode = TAIL; //creating a node pointer pointing to the TAIL of the linked list
        if(HEAD==TAIL){
             HEAD=TAIL=NULL;
        }
        else{
            Node *pred = HEAD; //Creating a predecessor node pointer pointing to the HEAD of the linked list

            //Traversing the predecessor pointer until the second last node of the linked list
            while(pred->next!=TAIL){  
            pred = pred->next;
            }
        TAIL = pred;
        TAIL->next = NULL;
        }
         delete newNode; 
    }
    else cout<<"Empty"<<endl; 
}

void LinkedList::remove(int info){ //Function to remove the desired data from the linked list
    if(!isEmpty()){ 
        if(HEAD->info == info){
            removeFromHead(); //calling the removeFromHead function to remove the info if found in head of the linked list
        }
        else if(TAIL->info == info){ //calling the removeFromTail function to remove the info if found in tail of the linked list
            removeFromTail();
        }
        else{
            Node* newNode = HEAD->next; //creating a newNode pointer which points to the second node of the list
            Node* pred = HEAD; //creating a predecessor pointer pointing to the head of the list
            while(pred->next!=NULL){ 
                if(newNode->info == info)break;
                else{
                    pred = pred->next;
                    newNode= newNode->next;
                }
            }
            if (newNode!=NULL){
                pred->next = newNode->next;
                delete newNode;
            }
            else{
                TAIL = pred;
                delete newNode;
            }
            
        }
    }
}

void LinkedList::search(int info){ //Searches for the required data and returns true if it is found 
    Node* newNode = HEAD;
    bool found = false; //flag to indicate whether the info is found
    if(!isEmpty()){
        while(newNode!=NULL){
            if(newNode->info == info){
                cout<<"Info found"<<endl;
                found = true; //updating the flag once the info is found
                break; // breaking out of the while loop
            }
            newNode = newNode->next;
        } 
        if(!found){ //if the required info is not found
            cout<<"Info not found"<<endl;
        }
    }
}

bool LinkedList::retrieve(int data, Node** outputPtr) {
    Node* p = HEAD; // Initialize pointer p to traverse the list starting from HEAD

    while (p != nullptr && p->info != data) { //Traversing until the required info is found
        p = p->next;
    }

    if (p == nullptr) { // If p is nullptr, it means the data was not found in the list
        *outputPtr = nullptr; // Set outputPtr to nullptr
        return false; // Return false to indicate data not found
    } else {
        *outputPtr = p; // Set outputPtr to point to the node containing the data
        return true; // Return true to indicate data found
    }
}

int main(){
    LinkedList list1; //Creating an object list1 of the class Node i.e creating a linked list
    list1.addToHead(2); //adding 2 to the head
    list1.addToTail(3); //adding 3 to the tail
    list1.addToTail(4); //adding 4 to the tail
    list1.printlist();
    list1.search(5); //searcing for the info 5
    list1.search(2); //searching for the info 2
    list1.removeFromHead();
    list1.removeFromTail();
    list1.printlist();
    Node* outputPtr; // Pointer to store the address of the node containing the data
    bool found = list1.retrieve(3, &outputPtr); // Call the retrieve function and search for 3
    // Checking if the data was found
    if (found) {
        cout << "Data found: " << outputPtr->info << endl; //printing the required info if found
    } else {
        cout << "Data not found" << endl;
    }


}
