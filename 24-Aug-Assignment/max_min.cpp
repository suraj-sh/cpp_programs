/* 12. Finding Maximum and Minimum:
   WAP that finds the maximum and minimum values in an array of integers. */

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i){
        cout << "Enter elements of array: ";
        cin >> arr[i];
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum values
    for(int i = 1; i < n; ++i){

        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

    return 0;
}
