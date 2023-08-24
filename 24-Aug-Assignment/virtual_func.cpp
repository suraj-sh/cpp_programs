/* 17. Virtual Functions:
   Extend the previous example by making the displayInfo function a virtual function in the base class. 
   Override it in the derived class to display car-specific information. */

#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle{

    protected:
        string make;
        int year;

    public:
        Vehicle(const string &make, int year) : make(make), year(year){

        }

        // Virtual function
        virtual void displayInfo(){
            cout << "Make: " << make << endl;
            cout << "Year: " << year << endl;
        }
};

// Derived class: Car (inherits from Vehicle)
class Car : public Vehicle{
    
    private:
        string model;

    public:
        Car(const string &make, int year, const string &model)
            : Vehicle(make, year), model(model){

        }

    // Override the virtual function
    void displayInfo() override{

        cout << "Car Information:" << endl;
        Vehicle::displayInfo(); // Call the base class's displayInfo() method
        cout << "Model: " << model << endl;
    }
};

int main(){

    // instance of Car class
    Car car("TATA", 2021, "Punch");

    car.displayInfo();

    return 0;
}
