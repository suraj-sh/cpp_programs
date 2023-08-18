// Classes and Objects
#include<iostream>
using namespace std;

// Defining a class named 'house'
class house {

    // Access specifier 'private': Members defined below are only accessible within the class
    private:  
        // Member variables for the dimensions of the house
        int length = 0, breadth = 0;

    // Access specifier 'public': Members defined below are accessible from outside the class
    public: 
        // Member function to set the dimensions of the house
        void setData(int x, int y) {

            length = x;
            breadth = y;
        }

        // Member function to calculate and display the area of the house
        void area() {

            cout << "Area of house: " << length * breadth << endl;
        }
};

// Main function where the program execution starts
int main() {

    // Creating an object 'suraj' of class 'house'
    house suraj;

    // Setting the dimensions of the house using the member function 'setData'
    suraj.setData(300, 500);

    // Calling the member function 'area' to calculate and display the area of the house
    suraj.area();
    
    // Indicating successful program execution
    return 0;
}


// CONSTRUCTORS
// Deault / Non Parameterized Constructor - this does not take any argument
#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name;
        int age;
        float height;

    public:
        /*  if we dont mention the constructor the compiler will allocate
            memory to member variables i.e garbage values */

        Person(){       // constructor name shoulb be same as class name

            name = "Null";
            age = 0;
            height = 0.0f;
        }

        void getDetails(){

            cout << endl << "Name " << name;
            cout << endl << "Age " << age;
            cout << endl << "Height " << height;
        }
};

int main(){

    // When we dont pass values with object then default constructor is called
    Person obj;
    obj.getDetails();
    return 0;
}

// Parameterized Constructor - takes some argument
#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name;
        int age;
        float height;

    public:
        Person(string name_a, int age_a, float height_a){    // constructor 

            name = name_a;
            age = age_a;
            height = height_a;
        }

        void getData(){

            cout << endl << "Name " << name;
            cout << endl << "Age " << age;
            cout << endl << "Height " << height;
        }
};

int main(){

    Person obj2("Suraj", 23, 5.10f);
    obj2.getData();
    return 0;
}

// Copy constructor - creates new object from existing object
#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name;
        int age;
        float height;

    public:
        Person(string name_a, int age_a, float height_a){

            name = name_a;
            age = age_a;
            height = height_a;
        }

        Person(Person &obj2){       // copy constructor

            name = obj2.name;
            age = obj2.age;
            height = obj2.height;
        }

        void getData(){

            cout << endl << "Name " << name;
            cout << endl << "Age " << age;
            cout << endl << "Height " << height;
        }
};

int main(){

    Person obj2("Suraj", 23, 5.10f), obj3(obj2);
    obj2.getData();
    obj3.getData();
    return 0;
}

// Overload constructor - assigning values directly to the parameterized constructor
#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name;
        int age;
        float height;

    public:
        // assigned values to the arguments of the constructor
        Person(string name_a = "Suraj", int age_a = 23, float height_a = 5.10f){

            name = name_a;
            age = age_a;
            height = height_a;
        }

        void getData(){

            cout << endl << "Name " << name;
            cout << endl << "Age " << age;
            cout << endl << "Height " << height;
        }
};

int main(){

    Person obj;
    obj.getData();
    return 0;
}

// WAP to take phone details as input and store them in object & use constructors
#include<iostream>
#include<string>
using namespace std;

class Mobile{

    private:
            string name;
            int RAM;
            string processor;
            int battery;

    public:
            Mobile(string name_a, int RAM_a, string processor_a, int battery_a){

                name = name_a;
                RAM = RAM_a;
                processor = processor_a;
                battery = battery_a;
            }

            void getMobiledata();
};

// getMobiledata() body can be created outside the class using scope resolution(::) method
void Mobile::getMobiledata(){

    cout << endl << "Name " << name;
    cout << endl << "RAM " << RAM;
    cout << endl << "Processor " << processor;
    cout << endl << "Battery " << battery;
}

int main(){

    Mobile obj("Pixel", 6, "Snapdragon", 3140);
    obj.getMobiledata();
    return 0;
}

// Operator overloading - (+,-,*,/) for user-defined types like objects & structures  
#include<iostream>
using namespace std;

class A{

    private:
        int weight;

    public:
        A(int x = 0){

            weight = x;
        }

        void printValue(){

            cout << endl << "Weight is " << weight;
        } 

        A operator+(A w){

            A temp;
            temp.weight = weight + w.weight;
            return temp;
        }
};

int main(){

    int a = 34, b = 45, c = 0;
    c = a + b;
    cout << endl << "Total " << c;

    // operator overloading
    A person1(50);
    A person2(40);
    A total;

    total  = person1 + person2;
    total.printValue();

    return 0;
}

// WAP to overload ++pre increment and post++ increment opeartor
#include<iostream>
using namespace std;

class Person{

    private:
        int weight;

    public:
        Person(int w = 0){

            weight = w;
        }

        void printWeight(){

            cout << "Weight is " << weight << endl;
        } 

        void operator++(){      // pre

            ++weight;
        }

        void operator++(int){   // post

            weight++;
        }
};

int main(){

    Person Jon(78);
    ++Jon;
    Jon++;
    Jon.printWeight();  
    return 0;
}