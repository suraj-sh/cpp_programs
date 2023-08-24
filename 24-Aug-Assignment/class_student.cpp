/* 15. Classes:
   Design a class Student that stores the name and age of a student. 
   Create objects of the class and display their information. */
   
#include<iostream>
using namespace std;

class Student{

    private:
        char name[20];  // data member 1
        int age;        // data member 2
    
    public:
        void getdata(){     // member function 1

            cout << "Enter name : ";
            cin >> name;
            cout << "Enter age : ";
            cin >> age;
        }

        void showdata(){    // member function 2

            cout << "Name : " << name << endl;
            cout << "Age : " << age;
        }
};

int main(){

    Student s;  // object s 
    s.getdata();    // calling member function 1 
    s.showdata();   // calling member function 2

    return 0;
}