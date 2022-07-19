#include <iostream>
using namespace std;

// Base class which will be the Parent
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut!" << endl;
        }
};

// Derived class which will be the Child
class Car: public Vehicle { // Now Car is a child of class Vehicle
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;

    return 0;
}