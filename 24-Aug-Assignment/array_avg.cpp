/* 9. Simple Array Average:
   Write a program that calculates the average of numbers stored in an array. */

#include<iostream>
using namespace std;

int main(){

    int arr[2];     // stores array from 0 to 2 i.e. 3 numbers  
    int sum = 0;    

    for(int i = 0; i < 3; i++){

        cout << "Enter numbers : ";
        cin >> arr[i];
        sum += arr[i]; 
    }
    
    int average = sum / 3;
    cout << "Average is : " << average;
    return 0;
}