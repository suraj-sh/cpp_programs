/* 14. Functions:
   WAP with a function that takes two integers as parameters and returns their sum. 
   Call the function and display the result.*/

#include <iostream>
using namespace std;

// function declaration
int sum(int a, int b);

int main(){

    int num1, num2;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    // calling function sum and returning result
    cout << "The sum is: " << sum(num1, num2);  

    return 0;
}

// function definition
int sum(int a, int b){

    return a + b;
}
