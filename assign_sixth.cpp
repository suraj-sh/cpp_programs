/* Define a class fraction which has numerator an denominator as data members. 
   Write the construtor and display fraction */ 
#include <iostream>
using namespace std;

class Fraction{

    private:
        int numerator;
        int denominator;

    public:
        // Constructor
        Fraction(int num, int den) : numerator(num), denominator(den){ 
        
        }
        // Method to display the fraction
        void display(){

            cout << numerator << "/" << denominator << endl;
        }
};

int main(){

    // Create a Fraction object and display it
    Fraction fraction(3, 4);
    fraction.display();

    return 0;
}


/* Define a class to represent a bank account. Include the following data members - 
   name of depositor, account number and balance amount. 
   Initialize the values using constructor and write member functions for 
   a) to deposit an amount 
   b) to withdraw amount after checking balance 
   c) to display name and balance */

#include <iostream>
#include <string>
using namespace std;

class BankAccount{

    private:
        string depositorName;
        int accountNumber;
        double balanceAmount;

    public:
        // Constructor to initialize the values
        BankAccount(const string& name, int accountNum, double initialBalance) :
            depositorName(name), accountNumber(accountNum), balanceAmount(initialBalance) {}

        // Member function to deposit an amount
        void deposit(double amount){
            if (amount > 0) {
                balanceAmount += amount;
                cout << "Deposited: " << amount << endl;
            } 
            else{
                cout << "Invalid amount for deposit." << endl;
            }
        }

        // Member function to withdraw an amount after checking balance
        void withdraw(double amount){

            if (amount > 0 && amount <= balanceAmount){
                balanceAmount -= amount;
                cout << "Withdrawn: " << amount << endl;
            } 
            else{
                cout << "Insufficient balance or invalid amount for withdrawal." << endl;
            }
        }

        // Member function to display name and balance
        void display(){

            cout << "Depositor: " << depositorName << endl;
            cout << "Balance: " << balanceAmount << endl;
        }
};

int main(){

    // Create a BankAccount object and perform operations
    BankAccount account("Suraj Sharma", 12345, 1000.0);
    account.display();

    account.deposit(500.0);
    account.display();

    account.withdraw(200.0);
    account.display();

    return 0;
}


/* WAP to declare a class student having data members as rollno and percentage. 
   Write constructor to initialize these data members. 
   Accept and display this data for one object of a class */
#include <iostream>
using namespace std;

class Student{

    private:
        int rollNo;
        float percentage;

    public:
        // Constructor to initialize data members
        Student(int roll, float perc) : rollNo(roll), percentage(perc){

        }

        // Method to accept data for a student
        void acceptData(){

            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter percentage: ";
            cin >> percentage;
        }

        // Method to display data for a student
        void displayData(){

            cout << "Roll number: " << rollNo << endl;
            cout << "Percentage: " << percentage << "%" << endl;
        }
};

int main() {
    // Create a Student object
    Student student(0, 0.0);

    // Accept and display data
    student.acceptData();
    student.displayData();

    return 0;
}


/* Define class student which will contain member variables roll no, name and course. 
   Write a program using constructor with default value for course as 'computer engg'. 
   Accept this data for two objects and display accepted data */ 
#include <iostream>
#include <string>
using namespace std;

class Student{

    private:
        int rollNo;
        string name;
        string course;

    public:
        // Constructor with default value for course
        Student(int roll, const string& studentName, const string& studentCourse = "Computer Engg")
            : rollNo(roll), name(studentName), course(studentCourse){

        }

        // Method to accept data for a student
        void acceptData(){

            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter name: ";
            cin >> name;
        }

        // Method to display data for a student
        void displayData(){

            cout << "Roll number: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};

int main(){

    // Create two Student objects with default and custom course
    Student student1(0, ""); // Default constructor
    Student student2(0, ""); // Default constructor

    // Accept and display data for both students
    cout << "Enter data for student 1:" << endl;
    student1.acceptData();
    cout << "\nEnter data for student 2:" << endl;
    student2.acceptData();

    cout << "\nStudent 1 data:" << endl;
    student1.displayData();
    cout << "\nStudent 2 data:" << endl;
    student2.displayData();

    return 0;
}


/* Define a class employee which will contain member variables basic TA, DA, HRA. 
   WAP using constructor with default values of HRA and DA and calculate the gross salary of employee */
#include <iostream>
using namespace std;

class Employee{

    private:
        float basicSalary;
        float TA;
        float DA;
        float HRA;

    public:
        // Constructor with default values for HRA and DA
        Employee(float basic, float ta, float daPercentage, float hra = 0.0)
            : basicSalary(basic), TA(ta), HRA(hra){

                // Calculate DA based on the provided percentage
                DA = basicSalary * (daPercentage / 100);
        }

        // Method to calculate and return the gross salary
        float calculateGrossSalary(){

            return basicSalary + TA + DA + HRA;
        }
};

int main(){

    // Create an Employee object with default values
    Employee employee(50000, 1500, 5); // 5% DA

    // Calculate and display the gross salary
    float grossSalary = employee.calculateGrossSalary();
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}