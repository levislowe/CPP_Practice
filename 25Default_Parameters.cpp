#include <iostream>
using namespace std;

void myFunction(string country = "Norway") { //Setting the default of country
    cout << country << endl;
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction(); //Displays Norway which is the default
    myFunction("USA");

    return 0;
}