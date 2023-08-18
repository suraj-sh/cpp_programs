// Understanding C++ programs
#include<iostream>
using namespace std;  // using the standard namespace

int main() {

    // Printing output with 'std::'
    std::cout << "Hello";   // Using 'std::' to explicitly specify the namespace
    cout << "Hello World!"; // Without 'std::' due to the 'using namespace std;' directive
    
    return 0;
}

// Datatypes in c++
#include<iostream>
using namespace std;

int main(){

    int myFirstint = 5;
    float myFirstfloat = 0.5f;
    bool myFirstbool = true;    // returns 1(True)
    char myFirstchar = 'c';
    string myFirststring = "c++";

    cout << myFirstint << endl;     // endl for printing on next line
    cout << myFirstfloat << endl;
    cout << myFirstbool << endl;
    cout << myFirstchar << endl;
    cout << myFirststring << endl;

    return 0;
}

// Program to uderstand input and output
#include<iostream>
using namespace std;

int main() {
    int a, b, sum;

    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;

    // 1st way to add using a variable 'sum'
    sum = a + b;
    cout << "Sum = " << sum << endl;

    // 2nd way to add without using variable 'sum'
    cout << "Total = " << a + b << endl;

    return 0;
}

// Program to display area, perimeter and cube of different shapes
#include<iostream>
using namespace std;

int main() {

    // Area of a square
    int side;
    cout << "Enter side: ";
    cin >> side;
    cout << "Area of square is: " << side * side << endl;

    // Area of a circle
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle is: " << 3.14 * (radius * radius) << endl;

    // Perimeter of a rectangle
    int len, wid;
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter width: ";
    cin >> wid;
    cout << "Perimeter of rectangle is: " << 2 * (len + wid) << endl;

    // Cube
    float num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Cube of the number is: " << num * num * num << endl;

    return 0;
}

// Program to understand instructions and operators
#include<iostream>
using namespace std;

int main() {

    int a = (int) 1.999999; // explicit type conversion
    cout << a << endl; // Output: 1

    cout << 16 % 10 << endl; // Modulus operator: 16 divided by 10 leaves a remainder of 6

    int b = 4 + 9 * 10; // Operator precedence: multiplication is performed before addition
    cout << b << endl; // Output: 94

    int c = 4 * 3 / 6 * 2; // multiplication and division are performed from left to right
    cout << c << endl; // Output: 4

    int d = 5 * 4 - 2 * 3; // multiplication is performed before subtraction
    cout << d << endl; // Output: 14

    int e = 5 * 2 - 2 / 3; // multiplication is performed before division, and division results in an integer (truncation)
    cout << e << endl; // Output: 10

    int f = 5 * (2 / 2) * 3; // inner parentheses are evaluated first
    cout << f << endl; // Output: 15

    int g = 5 + 2 / 2 * 3; // division is performed before multiplication, then addition
    cout << g << endl; // Output: 8

    return 0;
}

// Program for assignment & logical operators
#include<iostream>
using namespace std;

int main() {

    cout << (4 == 3) << endl;  // Returns 0 (false) because 4 is not equal to 3
    cout << (7 >= 5) << endl;  // Returns 1 (true) because 7 is greater than or equal to 5
    cout << (5 <= 4) << endl;  // Returns 0 (false) because 5 is not less than or equal to 4
    cout << (7 != 5) << endl;  // Returns 1 (true) because 7 is not equal to 5
    
    cout << (3 > 4 && 5 > 2) << endl;  // Returns 0 (false) because both conditions are not true (3 > 4 is false)
    cout << (3 > 4 || 5 > 2) << endl;  // Returns 1 (true) because one of the conditions is true (5 > 2 is true)
    cout << !((3 > 4) || (5 > 2)) << endl;  // Returns 0 (false) because the negation of a true condition is false
    
    return 0;
}

// Program for assignment operator
# include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 1;

    a = a + 1;  // 1st way increments it by 1
    b += 1;     // 2nd way shorthand gives same result
    
    cout << a << endl;
    cout << b;

    return 0;
}

// Program to check if a number is divisible by 2 or not 
#include<iostream>
using namespace std;

int main(){

    int x;

    cout << "Enter a number : ";
    cin >> x;

    // returns 1(True) if divisible by 2 o.w. 0(False)
    cout << (x % 2 == 0);

    return 0;
}

// Write a program to print 1(True) or 0(False) for some statements 
#include<iostream>
using namespace std;

int main() {

    // a] If it's Sunday and it's snowing -> True
    int isSunday = 1;
    int isSnowing = 1;
    cout << (isSunday && isSnowing) << endl;

    // b] If it's Monday or it's raining -> True
    int isMonday = 0;
    int isRaining = 1;
    cout << (isMonday || isRaining) << endl;

    // c] If a number is greater than 9 and less than 100 (2 digit number) -> True
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << (x > 9 && x < 100);

    return 0;
}

// WAP to print the average of 3 numbers
#include<iostream>
using namespace std;

int main(){
   
   float x, y, z; 
   float avg;
   
   cout << "Enter x : ";
   cin >> x;
   cout << "Enter y : ";
   cin >> y;
   cout << "Enter z : ";
   cin >> z;    
 
   avg = (x + y + z) / 3.0;     
   cout << "Average is : " << avg; 

   return 0;   
}

// Program to display if entered character is digit or not
#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter character: ";
    cin >> ch;

    // Check if the character is a digit by ASCII comparison
    bool isDigit = (ch >= '0') && (ch <= '9');

    // Print false (0) for not a digit and true (1) for a digit
    cout << isDigit << endl;

    return 0;
}

// WAP to print the smallest number
#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Calculate the smallest number between 'a' and 'b'
    // If 'a' is smaller, (a < b) evaluates to 1, and (a > b) evaluates to 0, resulting in 'a'
    // If 'b' is smaller, (a < b) evaluates to 0, and (a > b) evaluates to 1, resulting in 'b'
    int smallest = (a < b) * a + (b < a) * b;

    cout << "Smallest number: " << smallest << endl;

    return 0;
}