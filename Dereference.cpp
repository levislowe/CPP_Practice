#include <iostream>
using namespace std;

int main() {
    string food = "Pizza"; //Variable declaration
    string* pointer = &food; //Pointer declaration

    //Refernce: Output the memory address of food with the pointer
    cout << pointer << endl;

    //Dereference: Output the value of food with the pointer
    cout << *pointer << endl;
}