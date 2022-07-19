#include <iostream>
using namespace std;

int main() {
    try {
        //Block of code to try
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;
        } else {
             throw (age); //Throw an exception when a problem arise
        }
    }
    catch(int myNum) {
        //Block of code to handle the errors
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Age is: " << myNum << endl;
    }
   
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;
        } else {
            throw 505; //Throws the error number 505
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Error number: " << myNum << endl;
    }

    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;
        } else {
            throw 505;
        }
    }
    //"Three dots" sytax handles any type of exception
    catch (...) { 
        cout << "Access denied - You must be at least 18 years old." << endl;
    }
}