/* 11. Prepending To A Doubly Linked List
   Problem Statement: Prepending Nodes
   Enhance the previous program by implementing a function that prepends a new 
   node with a given value to the beginning of the doubly linked list. */

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;
        Node *prev;

        Node(int data){

            this->data = data;
            next = NULL;
            prev = NULL;
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

        // Destructor
        ~LinkedList(){

            Node *next;
            while(header != NULL){

                next = header->next;
                delete header;
                header = next;
            }
        }

        void prepend(int data){

            // create node to be inserted
            Node *n = new Node(data);

            // Case 1 : check if list is empty
            if(header == NULL){
                header = n;
                tail = n;
            }

            // Case 2 : check if list is not empty
            else{
                header->prev = n;
                n->next = header;
                header = n;   
            }

            // increment size
            size++;
        }
        
        void toString(){

            // Create a temp pointer that points to first node
            Node *temp = header;

            // Create loop that stops when pointer is NULL
            while(temp != NULL){
                
                // Print data
                cout << temp->data << " ";

                // Advance pointer to next node 
                temp = temp->next;
            }
            cout << endl;
        }             
};

int main(){

    LinkedList list;
    list.prepend(1);
    list.prepend(2);
    list.prepend(3);
    list.toString();
}