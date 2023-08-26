/* 21. Implementing a Stack using a Linked List
   Problem Statement: Linked List-based Stack Implementation
   Extend the previous program by implementing a stack using a linked list. 
   Implement push and pop operations along with displaying the stack's contents. 
   Test the implementation by performing various stack operations. */

#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

class StackLinkedListImpl{

    private:
        Node* top;

    public:
        StackLinkedListImpl(){
            top = nullptr;
        }

        void push(int data){
            Node* n = new Node(data);
            if(top == nullptr){
                top = n;
            } 
            else{
                n->next = top;
                top = n;
            }
        }

        int pop(){
            if(top == nullptr){
                cout << "Stack is Empty" << endl;
                return -1;
            } 
            else{
                int tempData = top->data;
                Node* temp = top;
                top = top->next;
                delete temp;
                return tempData;
            }
        }

        void display(){
            Node* current = top;
            while(current != nullptr){
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main(){
    StackLinkedListImpl stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack contents: ";
    stack.display();

    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;

    cout << "Stack contents after pops: ";
    stack.display();

    return 0;
}
