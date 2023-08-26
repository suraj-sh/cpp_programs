/* 16. Remove Node At A Certain Position From Our Doubly Linked List
   Problem Statement: Removing Node at Position
   Develop a function that removes a node at a specified position in the doubly linked list. */

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

        void removeLast(){
            // Case 1 : check if list has 1 node
            if(header->next == NULL){
                // delete header
                delete header;
                // set header and tail to NULL
                header = NULL;
                tail = NULL;
                size--;
            }
            // Case 2 : More than one node
            else if(header != NULL){
                // advance tail pointer to previous node before it 
                tail = tail->prev;
                // delete the previous last node
                delete tail->next;
                // set the current last node next pointer to NULL
                tail->next = NULL;
                // devrement size
                size--;
            }
            
        }

        void removeAt(int pos){

            // Case 1 : check for valid pos
            if(pos > size || pos < 1){
                return;
            }
            // Case 2 : check if pos is the first node
            else if(pos == 1){
                removeFirst();
            }
            // Case 3 : check if pos is the last node
            else if(pos == size){
                removeLast();
            }
            // Case 4 : all other cases
            else if(header != NULL){
                Node *curr = header;
                for(int i = 1; i < pos; i++){
                    curr = curr->next;
                }
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
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
    list.removeAt(2);
    list.toString();
}