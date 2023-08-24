/* 1. Simple Calculator:
   Create a program that takes two numbers and an operator (+, -, *, /) 
   as input from the user and performs the corresponding arithmetic operation. */

#include<iostream>
using namespace std;

int main(){

    float num1, num2, res;
    int choice;

    while(true){
        cout << "\n1] ADD \n2] SUBTRACT \n3] MULTIPLY \n4] DIVIDE \n5] EXIT\n" << endl; 
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice){

        case 1: cout << "Enter num1 : ";
                cin >> num1;
                cout << "Enter num2 : ";
                cin >> num2;
                res = num1 + num2;
                cout << "Addition is : " << res << endl;
                break;

        case 2: cout << "Enter num1 : ";
                cin >> num1;
                cout << "Enter num2 : ";
                cin >> num2;
                res = num1 - num2;
                cout << "Subtraction is : " << res << endl;
                break;

        case 3: cout << "Enter num1 : ";
                cin >> num1;
                cout << "Enter num2 : ";
                cin >> num2;
                res = num1 * num2;
                cout << "Multiplication is : " << res << endl;
                break;

        case 4: cout << "Enter num1 : ";
                cin >> num1;
                cout << "Enter num2 : ";
                cin >> num2;
                res = num1 / num2;
                cout << "Division is : " << res;
                break;

        case 5: cout << "Exiting the program." << endl << endl;
                exit(0);
                break;

        default: cout << "Invalid choice";
                break;
        }
    }
    return 0;
}