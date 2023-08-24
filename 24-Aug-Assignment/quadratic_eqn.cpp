/* 3. Quadratic Equation Solver:
   Develop a program that solves a quadratic equation of the form ax^2 + bx + c = 0. 
   The program should take coefficients a, b, and c as input and output the solutions for x. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    if(a == 0){

        cout << "Coefficient 'a' must not be zero for a quadratic equation." << endl;
        return 1;
    }

    float discriminant = b * b - 4 * a * c;
    
    // condition for real and different roots
    if(discriminant > 0){

        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << endl;
    } 

    // condition for real and equal roots
    else if(discriminant == 0){

        float root = -b / (2 * a);
        cout << "One real root: " << root << endl;
    } 

    // if roots are not real
    else{

        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
