#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* pointer = &food;

    //Output the value of food
    cout << food << endl;

    //Output the memory address of food
    cout << &food << endl;

    //Access the memory address of food and output its value
    cout << *pointer << endl;

    //Change the value of the pointer
    *pointer = "Hamburger";

    //Output the new value of the pointer
    cout << *pointer << endl;

    //Output the new value of the food variable
    cout << food << endl;

    return 0;
}