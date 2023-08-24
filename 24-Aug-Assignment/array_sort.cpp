/* 11. Basic Sorting Algorithm:
   Implement a basic sorting algorithm (e.g., bubble sort) to sort an array of integers. */

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i){
        cout << "Enter element of array : ";
        cin >> arr[i];
    }

    // Bubble Sort Algorithm
    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
