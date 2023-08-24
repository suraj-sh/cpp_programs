/* 13. Statements:
   Create a program that calculates the area of a rectangle. 
   Use input statements to get the length and width from the user and then calculate and display the area. */

#include <iostream>
using namespace std;

int main(){

    float length, width;

    cout << "Enter length : ";
    cin >> length;

    cout << "Enter width : ";
    cin >> width;

    // Calculate the area
    float area = length * width;

    cout << "Area of rectangle is : " << area;

    return 0;
}
