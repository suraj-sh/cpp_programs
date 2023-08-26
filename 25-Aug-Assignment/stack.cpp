/* 19. Stack Overview
   Problem Statement: Understanding Stack Operations
   Write a program that provides a menu-based interface for performing stack operations: 
   push, pop, and display the elements. Use an array to implement the stack data structure. */

#include <iostream>
using namespace std;

const int MAX_SIZE = 3;
int arr[MAX_SIZE];
int top = -1;

void push(int value){
    if(top == MAX_SIZE - 1){
        cout << "Stack is full. Cannot push element." << endl;
        return;
    }
    arr[++top] = value;
    cout << value << " pushed to the stack." << endl;
}

void pop(){
    if(top == -1){
        cout << "Stack is empty. Cannot pop element." << endl;
        return;
    }
    cout << arr[top--] << " popped from the stack." << endl;
}

void display(){
    if(top == -1){
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for(int i = 0; i <= top; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int choice, value;

    do{
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){

            case 1: cout << "Enter value to push: ";
                    cin >> value;
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: cout << "Exiting program." << endl;
                    break;
            
            default: cout << "Invalid choice. Please try again." << endl;
        }
    }while(choice != 4);

    return 0;
}
