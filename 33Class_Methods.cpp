#include <iostream>
using namespace std;

class MyClass { //The class
    public: //Access specifier
        void myMethod() { //Method or Function defined inside the class
            cout << "Hello World!" << endl;
        }
        void newMethod(); //Method or Function declaration
};

//Method or Function is defined outside of the class
void MyClass::newMethod() {
    cout << "Good Day to You!" << endl;
}

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    MyClass myObj; //Create an object of MyClass
    myObj.myMethod(); //Now call the method within MyClass
    myObj.newMethod();

    Car carObj; //Create an object of car
    cout << carObj.speed(200); //Call the method with an argument 

    return 0;
}