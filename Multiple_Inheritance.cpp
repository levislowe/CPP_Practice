#include <iostream>
using namespace std;

//Base class which will be a Parent
class MyClass {
    public:
        void myFunction() {
            cout << "Some content from the parent class." << endl;
        }
};

//Another base class which will also be a Parent
class MyOtherClass {
    public:
        void myOtherFunction() {
            cout << "Some content from another parent class" << endl;
        }
};

// Derived class which will be a Child
class MyChild: public MyClass, public MyOtherClass {

};

int main() {
    MyChild myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    return 0;
}