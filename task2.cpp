// WAP to add two numbers
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


/* WAP to declare a class 'Student' containing data member's name, roll_no, and percentage. 
   Declare getdata() and showdata() function and display and accept this data for 1 object of class */
#include<iostream> 
using namespace std;

class Student{       // class decalaration

    private:
        char name[30];      // data member 1
        int roll_no;        // data member 2
        float percentage;   // data member 3
    
    public:
        void getdata(){     // member function 1
        
            cout << "Enter Student name : ";
            cin >> name;
            cout << "Enter Student roll no. : ";
            cin >> roll_no;
            cout << "Enter Student percentage : ";
            cin >> percentage;
            
        }
        void showdata(){    // member function 2

            cout << "Student name is : " << name << endl;
            cout << "Student roll no. is : " << roll_no << endl;
            cout << "Student percentage is : " << percentage << endl;
        }
};  // class termination

int main(){      // main function

    Student s;      // creating objects
    s.getdata();    // calling member function 1
    s.showdata();   // calling member function 2
}


// Wrtie the above program using member function outside declaration
#include<iostream> 
using namespace std;

class Student{       // class declaration

    private:
        char name[30];      // data member 1
        int roll_no;        // data member 2
        float percentage;   // data member 3

    public:
        void getdata();     // member function 1
        void showdata();    // member function 2
};  // class termination

    void Student::getdata(){     // definition of member function 1

        cout << "Enter Student name : ";
        cin >> name;
        cout << "Enter Student roll no. : ";
        cin >> roll_no;
        cout << "Enter Student percentage : ";
        cin >> percentage;
    }

    void Student::showdata(){    // definition of member function 2

        cout << "Student name is : " << name << endl;
        cout << "Student roll no. is : " << roll_no << endl;
        cout << "Student percentage is : " << percentage << endl;
    }

int main(){      // main function

    Student s;      // creating object
    s.getdata();    // calling member function 1
    s.showdata();   // calling member function 2
}


/* WAP to find the area of circle using class circle which have following details:
   a) Accept radius from user  b) Calculate area   c) Display result */
#include<iostream> 
using namespace std;

class Circle{       // class decalaration

    private:
        float radius;      // data member 1
        float area;        // data member 2
    
    public:
        void calculate(){     // member function 1
        
            cout << "Enter radius : ";
            cin >> radius;
        }
        void display(){      // member function 2

            area = 3.14 * radius * radius;
            cout << "Area of circle : " << area << endl;
        }
};  // class termination

int main(){

    Circle cr;          // creating objects
    cr.calculate();     // calling member function 1
    cr.display();       // calling member function 2
}


/* WAP to declare class 'Person' containing data member's name, address and mobile_num.
   Declare getdata() to accept data of one person and dipslay with showdata() */
#include <iostream>
using namespace std;

class Person{

    private:
        char name[30];
        char address[50];
        char mobile_num[15];

    public:
        void getdata(){

            cout << "Enter Person's name: ";
            cin >> name;
            cout << "Enter Person's address: ";
            cin >> address;
            cout << "Enter Person's mobile number: ";
            cin >> mobile_num;
        }

        void showdata(){

            cout << "Person's name: " << name << endl;
            cout << "Person's address: " << address << endl;
            cout << "Person's mobile number: " << mobile_num << endl;
        }
};

int main(){

    Person p;
    p.getdata();
    p.showdata();

    return 0;
}


Write the same program using outside member function declaration
#include <iostream>
using namespace std;

class Person{

    private:
        char name[30];
        char address[50];
        char mobile_num[15];

    public:
        void getdata();
        void showdata();
};

    void Person::getdata(){         // member funtion declared outside class

        cout << "Enter Person's name: ";
        cin >> name;
        cout << "Enter Person's address: ";
        cin >> address;
        cout << "Enter Person's mobile number: ";
        cin >> mobile_num;
    }

    void Person::showdata(){

        cout << "Person's name: " << name << endl;
        cout << "Person's address: " << address << endl;
        cout << "Person's mobile number: " << mobile_num << endl;
    }

int main(){

    Person p;
    p.getdata();
    p.showdata();

    return 0;
}


/* WAP to declare class 'Person' containing data member's name, address and mobile_num.
   Declare getdata() to accept data of two person and dipslay with showdata() */
#include <iostream>
using namespace std;

class Person{

    private:
        char name[30];
        char address[100];
        char mobile_num[15];

    public:
        void getdata(){

            cout << "Enter Person name: ";
            cin >> name;  
            cout << "Enter Person address: ";
            cin >> address; 
            cout << "Enter Person mobile number: ";
            cin >> mobile_num; 
        }
        void showdata(){

            cout << "Person name: " << name << endl;  
            cout << "Person address: " << address << endl; 
            cout << "Person mobile number: " << mobile_num << endl;
        }
};

int main(){

    Person p1, p2;

    cout << "Enter details for Person 1:" << endl;
    p1.getdata();  // Call member function to input data
    cout << "Details for Person 1:" << endl;
    p1.showdata();  // Call member function to display data

    cout << endl << "Enter details for Person 2:" << endl;
    p2.getdata();  // Call member function to input data
    cout << "Details for Person 2:" << endl;
    p2.showdata();  // Call member function to display data

    return 0;
}


/* WAP to define a class employee having members Emp-id, Emp-name, basic salary and functions
   accept() and display(). Calculate DA=25% of basic salary, HRA=800, I-tax=15% of basic salary.
   Display the payslip using appropriate output format */
#include <iostream>
using namespace std;

class Employee{

    private:
        int empId;
        char empName[30];
        float basicSalary;
        float DA;
        float HRA;
        float incomeTax;

    public:
        void accept(){

            cout << "Enter Employee ID: ";
            cin >> empId;
            cout << "Enter Employee Name: ";
            cin >> empName;
            cout << "Enter Basic Salary: ";
            cin >> basicSalary;
        }

        void calculateSalary(){

            DA = 0.25 * basicSalary;
            HRA = 800;
            incomeTax = 0.15 * basicSalary;
        }

        void display(){

            cout << "\nPay Slip\n";
            cout << "Employee ID: " << empId << endl;
            cout << "Employee Name: " << empName << endl;
            cout << "Basic Salary: " << basicSalary << endl;
            cout << "DA: " << DA << endl;
            cout << "HRA: " << HRA << endl;
            cout << "Income Tax: " << incomeTax << endl;
        }
};

int main() {

    Employee emp;
    emp.accept(); 
    emp.calculateSalary(); 
    emp.display(); 

    return 0;
}


// Write the above programs using outside member function declaration
#include <iostream>
using namespace std;

class Employee{

    private:
        int empId;
        char empName[30];
        float basicSalary;
        float DA;
        float HRA;
        float incomeTax;

    public:
        void accept();
        void calculateSalary();
        void display();
};

    void Employee::accept(){

        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void Employee::calculateSalary(){

        DA = 0.25 * basicSalary;
        HRA = 800;
        incomeTax = 0.15 * basicSalary;
    }

    void Employee::display(){

        cout << "\nPay Slip\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Income Tax: " << incomeTax << endl;
    }

int main(){

    Employee emp;
    emp.accept(); 
    emp.calculateSalary(); 
    emp.display(); 

    return 0;
}


// Create a class time having data members as hour and minutes and WAP to add to Time objects.
#include <iostream>
using namespace std;

class Time{

    private:
        int hours;
        int minutes;

    public:
        Time(int h = 0, int m = 0){
            
            hours = h;
            minutes = m;
        }

        void display(){

            cout << hours << " hours " << minutes << " minutes" << endl;
        }

        Time addTime(const Time& t){

            Time sum;
            sum.minutes = minutes + t.minutes;
            sum.hours = hours + t.hours + sum.minutes / 60;
            sum.minutes %= 60;
            return sum;
        }
};

int main(){

    Time t1(2, 45);
    Time t2(1, 30);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    Time sum = t1.addTime(t2);
    cout << "Sum of Time 1 and Time 2: ";
    sum.display();

    return 0;
}


// Declare a class distance having data members as feet and inches. WAP to add two distances.
#include <iostream>
using namespace std;

class Distance{

    private:
        int feet, inches;

    public:
        void setdata(int, int);
        void add(Distance, Distance);
        void showdata();
};

    void Distance::setdata(int f, int i){

        feet = f;
        inches = i;
    }

    void Distance::add(Distance d1, Distance d2){

        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        if (inches >= 12) {
            feet = feet + (inches / 12);
            inches = inches % 12;
        }
    }

    void Distance::showdata(){

        cout << feet << " Feet and " << inches << " Inches";
    }

int main(){

    Distance d1, d2, d3;

    d1.setdata(3, 6);
    d2.setdata(4, 9);

    d3.add(d1, d2); // result is in d3
    d3.showdata();

    return 0;
}