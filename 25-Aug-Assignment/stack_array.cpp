/* 20. Implementing a Stack using an Array
   Problem Statement: Array-based Stack Implementation
   Create a program that implements a stack using an array. 
   Implement push and pop operations along with displaying the stack's contents. 
   Test the implementation by performing various stack operations. */

#include <iostream>
using namespace std;

class StackArrayImpl{

    private:
        int size;
        int* stackArr;
        int top;

        void resize(){
            int tempSize = size * 2;
            int* temp = new int[tempSize];
            for(int i = 0; i < size; i++){
                temp[i] = stackArr[i];
            }
            delete[] stackArr;
            stackArr = temp;
            size = tempSize;
        }

    public:
        StackArrayImpl(int size){
            this->size = size;
            stackArr = new int[size];
            top = -1;
        }

        ~StackArrayImpl(){
            delete[] stackArr;
        }

        void push(int data){
            if(top == size - 1){
                resize();
            }
            stackArr[++top] = data;
        }

        int pop(){
            if(top == -1){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return stackArr[top--];
        }
};

int main(){

    StackArrayImpl stack(5); // Create a stack with an initial size of 5

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl; // Trying to pop from an empty stack

    return 0;
}
