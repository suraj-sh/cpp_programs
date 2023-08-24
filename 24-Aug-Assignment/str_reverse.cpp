/* 10. String Reversal:
   Develop a program that reverses a given string using modern C++ techniques. */

#include <iostream>
using namespace std;

int main(){

    string str;

    cout << "Enter string: ";
    cin >> str;

    int len = str.length();    // returns length of string

    for(int i = 0; i < len / 2; i++){

        // using a third variable to swap first with last string
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    cout << "Reversed string: " << str;

    return 0;
}
