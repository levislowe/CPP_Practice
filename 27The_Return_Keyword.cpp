#include <iostream>
using namespace std;

int myFunction(int x) { 
    //return is required because the function was defined as an int
    return 5 + x; //Adds 5 + x together and returns the result
}

int newFunction(int x, int y) {
    return x + y;
}

int main() {
    cout << myFunction(3) << endl; //Displays 8 which is 5 + 3
    int z = newFunction(5, 8); //Displays 13 which is 5 + 8
    cout << z << endl;

    return 0;
}