# Linked List Implementation in C++

This project provides a simple implementation of a singly linked list in C++. It includes functions to add nodes to the head or tail of the list, remove nodes from the head or tail, check if the list is empty, and print the nodes in the list.

## LinkedList Class

The LinkedList class is a singly linked list implementation. Each node in the list contains an integer data value and a pointer to the next node. The LinkedList class maintains a pointer to the head node for easy access.

The class provides several functions for manipulating the list:

- addToHead and addToTail: Add a new node to the beginning or end of the list, respectively.
- removeFromHead: Remove a node from the beginning.
- removeFromTail: Remove a node from the end of the list.
- isEmpty: Check whether the list is empty.
- print: Print the data of all nodes in the list from head to tail.

## Files Included

- Main.cpp: This is the driver program that demonstrates the usage of the linked list.
- Linkedlist.h: This header file contains the declaration of the LinkedList and Node classes and their member functions.
- Node.cpp: This file contains the implementation of the LinkedList class and its member functions.

## Functions Used and Their Functionalities

- addToHead(int data): Adds a new node with the data to the beginning of the list.
- addToTail(int data): Adds a new node with the data to the end of the list.
- removeFromHead(int &data): Removes the node at the beginning of the list.
- removeFromTail(): Removes the node at the end of the list.
- isEmpty(): Returns true if the list is empty.
- print(): Prints out the nodes in the list.

## To Compile the Program

g++ Main.cpp Node.cpp

---

 
