/* 7. Fibonacci Series Generator:
   Develop a program that generates the Fibonacci series 
   up to a specified number of terms. */

#include<iostream>
using namespace std;

int main(){

    int n;
    int a = 0, b = 1, c;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){

        if(i <= 1){
            c = i;
        } 
        else{
            c = a + b; 
            a = b;
            b = c;
        }
        cout << c << " ";
    }

    return 0;
}