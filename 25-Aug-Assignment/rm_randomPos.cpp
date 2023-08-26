/* 7 Remove Node At A Certain Position From Our Linked List
   Problem Statement: Removing Node at Position
   Develop a function that removes a node at a specified position in the linked list. */

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

        void removeLast(){

            // Case 1 : empty
            // Case 2 : 1 node
            if(header->next == NULL){

                removeFirst();
            }
            // Case 3 : More than one node
            else if(header != NULL){
        
                Node *curr = header;
                Node *prev;
                while (curr->next != NULL){
                
                    prev = curr;
                    curr = curr->next;
                }
                tail = prev;
                prev->next = NULL;
                delete curr;
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
                Node *prev;
                Node *curr = header;
                for(int i = 1; i < pos; i++){
                    prev = curr;
                    curr = curr->next;
                }
                prev->next = curr->next;
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