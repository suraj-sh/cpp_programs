// Program to understand input and output and summation of two numbers
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

// WAP to print the average of 3 numbers
#include<iostream>
using namespace std;

int main(){
   
    float a, b, c, d; 
    float sum, avg;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c; 
    cout << "Enter d : ";
    cin >> d;    

    sum = a + b + c + d;
    cout << "Sum is : " << sum << endl; 
    avg = sum / 4.0;     
    cout << "Average is : " << avg; 

    return 0;   
}

// WAP to store current and resistance and display voltage using ohm's law
#include<iostream>
using namespace std;

int main(){

    float vol, res, i;

    cout << "Enter I(current): ";
    cin >> i;
    cout << "Enter Resistance: ";
    cin >> res;

    vol = i * res;    // ohm's law formula to calculte voltage
    cout << "Voltage is : " << vol;
    
    return 0;
}

// WAP to write the square of a number
#include<iostream>
using namespace std;

int main(){

    int n, sqr;

    cout << "Enter the number : ";
    cin >> n;

    sqr = n * n;
    cout << "Square of " << n << " is " << sqr; 
    
    return 0;
}

// WAP to swap two integer variables
#include<iostream>
using namespace std;

int main(){

    int num1 = 4, num2 = 2;
    cout << "Num1 : " << num1 << endl;
    cout << "Num2 : " << num2 << endl; 

    // 1st way to swap is using a third variable
    int temp;
    temp = num1;
    num1 = num2;    // num 1 becomes 2
    num2 = temp;    // num 2 becomes 4

    cout << "Num1 swap with 1st method : " << num1 << endl;
    cout << "Num2 swap with 1st method : " << num2 << endl;

    // 2nd way is to use a swap function
    swap(num1, num2); 

    cout << "Num1 with swap() : " << num1 << endl;
    cout << "Num2 with swap() : " << num2;

    return 0;
}

// WAP to take n as input and calculate its 40%
#include<iostream>
using namespace std;

int main(){

    float num, per;

    cout << "Enter num : ";
    cin >> num;

    per = 0.4 * num;
    cout << "40 percent of num is " << per;

    return 0;
}

// WAP which takes salary as input and display it as increments by 30% 
#include<iostream>
using namespace std;

int main(){

    float sal, per;

    cout << "Enter salary : ";
    cin >> sal;

    per = 0.3 * sal;    // increments by 30%
    sal = sal + per;    // updated salary
    cout << "Updated salary after increment " << sal;

    return 0;
}