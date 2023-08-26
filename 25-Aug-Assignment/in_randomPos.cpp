/* 8. Insert Node At A Certain Position Within Our Linked List
   Problem Statement: Inserting Node at Position
   Implement a function to insert a new node with a given value at a specified position in the linked list. */

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

        void prepend(int data){

            // Create new node
            Node *n = new Node(data);

            // Case 1 : Empty List
            if(header == NULL){

                header = n;
                tail = n;
            }
            // Case 2 : List is not empty
            else{

                Node *temp = header;
                header = n;
                n->next = temp;
            }

            // Increment size counter
            size++;
        }

        void insertAt(int pos, int data){

            // Case 1 : check for valid pos
            if(pos > size + 1 || pos < 1){
                return;
            }
            // Case 2 : check if insertion at beginning of list
            else if(pos == 1){
                prepend(data);
            }
            // Case 3 : check if insertion at end of list
            else if(pos == size + 1){
                append(data);
            }
            // Case 4 : all other cases
            else if(header != NULL){
                Node *n = new Node(data);
                Node *prev;
                Node *curr = header;
                for(int i = 1; i < pos; i++){
                    prev = curr;
                    curr = curr->next; 
                }
                prev->next = n;
                n->next = curr;
                size++;
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
    list.insertAt(2, 10);
    list.toString();
}