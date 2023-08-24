/* 18. Arrays:
   Write a program that takes an array of integers as input 
   and finds the sum and average of the numbers. */

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){

        cout << "Enter element : ";
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){

        sum += arr[i];
    }

    cout << "Sum : " << sum << endl;
    cout << "Average : " << sum / n << endl;

    return 0;
}
