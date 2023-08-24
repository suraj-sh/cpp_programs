/* 5. Sum of Even Numbers:
   Write a program that calculates the sum of all even numbers 
   from 1 to a given positive integer n */

#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if(n < 1){
        cout << "Please enter a positive integer.";
    } 
    else{
        
        int sum = 0;
        for(int i = 2; i <= n; i += 2){
            sum += i;
        }
        cout << "Sum of even numbers from 1 to " << n << " is: " << sum;
    }
    
    return 0;
}

