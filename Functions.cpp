#include <iostream>
using namespace std;

void myFunction() { //creating a function (Declaration)
    //code to be executed (Definition)
    cout << "I just got executed!" << endl;
}

void newFunction(); //Function declaration

//Main needs to be created or there will be an error in the code
int main() {
    //function must be called in main to be used
    cout << "Next is the function" << endl;

    myFunction(); //calling the function in main

    newFunction();

    return 0;
}

/*Functions can be declared before main and and then be defined after main*/
void newFunction() { //Function Definition
    cout << "This function was defined after main" << endl;
}