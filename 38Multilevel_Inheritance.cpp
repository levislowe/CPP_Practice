#include <iostream>
using namespace std;

// Base class which will be the Parent
class MyClass {
    public:
        void myFunction() {
            cout << "Some content in the parent class.";
        }
};

// Derived class which will be the Child
class MyChild: public MyClass {

};

// Derived class which will be the Grandchild
class MyGrandChild: public MyChild {

};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();

    return 0;
}