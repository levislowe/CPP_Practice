#include <iostream>
using namespace std;

class MyClass { // The class
    public: //Access specifier
        MyClass() { //Constructor
            cout << "Hello World!" << endl;
        }
};

class Car { //The class
    public: //Access specifier
        string brand; //Attribute
        string model; //Attribute
        int year; //Attribute
        Car(string x, string y, int z) { //Constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
};

class Dog { //The class
    public: //Access specifier
        string breed; //Attribute
        int age; //Attribute
        Dog(string x, int y); //Constructor declaration
};

//Constructor definition outside of class
Dog::Dog(string x, int y) {
    breed = x;
    age = y;
}

int main () {
    MyClass myObj; //Create an object of MyClass which will call the constructor

    //Create Car objects and call the constructor with different values
    Car carObj01("BMW", "X5", 1999);
    Car carObj02("Ford", "Mustang", 1969);

    //Print values
    cout << carObj01.brand << " " << carObj01.model << " " << carObj01.year << endl;
    cout << carObj02.brand << " " << carObj02.model << " " << carObj02.year << endl;
 
    //Create dog objects and call constructor with different values
    Dog dogObj01("Poodle", 12);
    Dog dogObj02("Pitbull", 2);

    //Print values
    cout << dogObj01.breed << " " << dogObj01.age << endl;
    cout << dogObj02.breed << " " << dogObj02.age << endl;
 
    return 0;
}