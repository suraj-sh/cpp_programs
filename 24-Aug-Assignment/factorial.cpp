/* 4. Factorial Calculator:
   Create a program that calculates the factorial of a given positive integer. 
   The program should take an integer input and output its factorial. */

#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if(n < 0){

        cout << "Factorial should be positive.";
    } 
    else{

        int factorial = 1;
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        cout << "Factorial of is: " << factorial;
    }
    
    return 0;
}
