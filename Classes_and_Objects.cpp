#include <iostream>
using namespace std;

class Car { //The class know as Car
    public: //Access specifier
        int year; //Attribute (int variable)
        string model; //Attribute (string variable)
        string brand;
};

int main() {
    Car Obj01; //Create an object of class Car

    //Access attributes and set values
    Obj01.brand = "BMW";
    Obj01.model = "X5";
    Obj01.year = 1999;

    Car Obj02; //Create another object of class Car

    Obj02.brand = "Ford";
    Obj02.model = "Mustang";
    Obj02.year = 1969;

    //Print attributes values
    cout << Obj01.brand << " " << Obj01.model << " " << Obj01.year << endl;
    cout << Obj02.brand << " " << Obj02.model << " " << Obj02.year << endl;

    return 0;
}