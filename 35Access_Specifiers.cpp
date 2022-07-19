#include <iostream>
using namespace std;

class MyClass { // the class
    int z; //By default the attibute is private
    public: // public access specifier
        int x; // public attribute
    private: //private access specifier
        int y;
};

int main() {
    MyClass myObj;
    myObj.x = 25; // Allowed since public
    //myObj.y = 50; // Not allowed since private
    //myObj.z = 75;

    return 0;
}