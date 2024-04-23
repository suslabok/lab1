#Linked List Implementation in C++__
This project is for a simple implementation of a singly linked list in C++. It includes functions to add nodes to the head or tail of the list, remove nodes from the head or tail, check if the list is empty, and print the nodes in the list

#LinkedList Class__
The LinkedList class is a singly linked list implementation. Each node in the list contains an integer data value and a pointer to the next node. The LinkedList class maintains a pointer to the head node. for easy access.

The class provides several functions for manipulating the list:__
-add To head and add To tail add a new node to the beginning or end of the list, respectively.
-removeFromHead remove a node from the beginning.
-removeFromTail remove a node from end of the list.
-IsEmpty checks whether the list is empty.
-print prints the data of all nodes in the list from head to tail.

#Files included__
-Main.cpp: This is the driver program that demonstrates the usage of the linked list.
-Linkedlist.h: This header file contains the declaration of the Linkedlist and node class and their member functions.
-Node.cpp: This file contains the implementation of the LinkedList class and its member functions.
 
#Functions used and their fucntionalities:__
-addToHead(int data):Adds a new node with the data to beginning of list
-add To Tail(int data): Adds a new node with the data to beginning of list
-removeFromHead(int &data):Removes the node at the beginning of list
-remove From Tail():Removes the node at the end of the list
-isEmpty():Returns true if the list is empty
-print():Prints out the nodes in the list

#To compile the program__
g++ Main.cpp Node.cpp
