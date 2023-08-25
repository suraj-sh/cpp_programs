/*1. Linked List Overview: Intro To Linked List
     Problem Statement: Linked List Creation
     Write a program to create a basic linked list that contains integers. 
     Define a structure for each node, and implement functions to create, display, and manage the linked list. */

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int data){

            this->data = data;
            next = NULL;
        }
};

class LinkedList{

    private:
        Node *header;
        Node *tail;
        int size;
    
    public:
        LinkedList(){   // Non-parameterized constructor

            header = NULL;
            tail = NULL;
            size = 0;
        }

        int getSize(){

            return size;
        }

};

int main(){

    return 0;
}