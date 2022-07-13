#include <iostream>
using namespace std;

int main() {
    string food = "Pizza"; //A food variable of type string
    string* pointer = &food; //A pointer variable that stores the address of food

    //Outputs the value of food
    cout << food << endl;

    //Outputs the memory address of food
    cout << &food << endl;

    //Output the memory address of food
    cout << pointer << endl;

    return 0;
}