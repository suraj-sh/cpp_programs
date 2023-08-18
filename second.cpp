// Program to understand conditional statements
#include<iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter age : ";
    cin >> age;

    if(age >= 18){
        cout << "Adult";
    }
    else if(age > 13 && age < 18){
        cout << "Teenager";
    }
    else{
        cout << "child";
    }

    return 0; 
}

// Same program using Ternary operator
#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age: ";
    cin >> age;

    (age >= 18) ? cout << "Adult" : cout << "Not adult";

    return 0;
}

// Program to understand switch cases
#include<iostream>
using namespace std;

int main() {

    int day;
    cout << "Enter Day [1-7]: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday";
                break;
        case 2: cout << "Tuesday";
                break;
        case 3: cout << "Wednesday";
                break;
        case 4: cout << "Thursday";
                break;
        case 5: cout << "Friday";
                break;
        case 6: cout << "Saturday";
                break;
        case 7: cout << "Sunday";
                break;
        default: cout << "Invalid Day";
    }

    return 0;
}

// Program to demonstrate nested if else
#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter number : ";
    cin >> num;

    if(num >= 0){
        cout << "Positive" << endl;
        if(num %2 == 0){
            cout << "Even";
        }
        else{
            cout << "Odd";
        }
    }
    else{
        cout << "Negative";
    }
    return 0;
}

// const keyword
#include<iostream>

using namespace std;

int main(){

    // const keyword makes the value constant and it cannot be changed after initialisation
    const string password = "suraj123";     // const 

    cout << "Enter you password : " << endl;

    string input;
    cin >> input;

    if(input == password){
        cout << "Password acepted";
    }
    else{
        cout << "Rejected";
    }
}