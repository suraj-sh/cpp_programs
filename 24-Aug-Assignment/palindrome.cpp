/* 8. Palindrome Checker:
   Create a program that checks if a given string is a palindrome (reads the same forwards and backwards). */

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;

    cout << "Enter a string: ";
    cin >> str;

    int i;
    int len = str.length();

    // len/2 means half of the string is compared with other half
    for(i = 0; i < len / 2; i++){ 

        // if the last element does not match with the first element
        if(str[i] != str[len - 1 - i]){
            break;
        }
    }
    
    if(i == len / 2){

        cout << "Palindrome.";
    } 
    else{

        cout << "Not a Palindrome.";
    }

    return 0;
}
