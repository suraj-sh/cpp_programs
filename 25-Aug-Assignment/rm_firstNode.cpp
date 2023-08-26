/* 5. Remove First Node From Our Linked List
   Problem Statement: Removing First Node
   Implement a function to remove the first node from the linked list. */

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

        void append(int data){

            // Create new node
            Node *n = new Node(data);
            
            // Case 1 : Empty List
            if(header == NULL){

                header = n;
                tail = n;
            }
            // Case 2 : List is not empty
            else{

                tail->next = n;
                tail = n;
            }

            // Increment size counter
            size++;
        }
        
        void removeFirst(){

            if(header != NULL){

                Node *temp = header;
                header = header->next;
                delete temp;
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