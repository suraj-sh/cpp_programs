/* 15. Remove First Node From Our Doubly Linked List
   Problem Statement: Removing First Node
   Implement a function to remove the first node from the doubly linked list. */

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

        void append(int data){

            // Create new node
            Node *n = new Node(data);
            
            // Case 1 : check is list is empty
            if(header == NULL){
                header = n;
                tail = n;
            }
            // Case 2 : check if list is not empty
            else{
                tail->next = n;
                n->prev = tail;
                tail = n;
            }

            // Increment size counter
            size++;
        }

        void removeFirst(){
            // check if only one node within list
            if(header->next == NULL){
                delete header;
                header = NULL;
                tail = NULL;
                size--;
            }
            // check if more than one node within list
            else if(header != NULL){
                header = header->next;
                delete header->prev;
                header->prev = NULL;
                size--;
            }
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
    list.append(1);
    list.append(2);
    list.append(3);
    list.toString();
    list.removeFirst();
    list.toString();
}