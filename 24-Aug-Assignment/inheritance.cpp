/* 16. Inheritance:
   Create a base class Vehicle with properties like make and year, 
   and a derived class Car that inherits from Vehicle with additional properties like model. 
   Create instances of both classes and display their information. */

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

        void displayInfo() {
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

        void displayInfo(){
            
            cout << "Car Information:" << endl;
            Vehicle::displayInfo(); // Call the base class's displayInfo() method
            cout << "Model: " << model << endl;
        }
};

int main(){

    // instance of Car class
    Car car("TATA", 2018, "Nexon");

    car.displayInfo();

    return 0;
}
