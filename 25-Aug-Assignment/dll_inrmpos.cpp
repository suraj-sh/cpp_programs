/* 13. Insert Node At A Certain Position Within Our Doubly Linked List
   Problem Statement: Inserting Node at Position
   Implement a function to insert a new node with a given value 
   at a specified position in the doubly linked list. */

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

        void insertAt(int pos, int data){

            // Case 1 : check for valid pos
            if(pos < 1 || pos > size + 1){
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
            // Case 4 : if pos is between the beginning and end of list
            else if(header != NULL){
                Node *n = new Node(data);
                Node *curr = header;
                for(int i = 1; i < pos; i++){
                    curr = curr->next; 
                }
                curr->prev->next = n;
                n->prev = curr->prev;

                n->next = curr;
                curr->prev = n;

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
    list.append(4);
    list.append(5);
    list.insertAt(3, 20);
    list.toString();
}