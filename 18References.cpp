#include <iostream>
using namespace std;

int main() {
    string food = "Pizza"; //Food variables
    string &meal = food; //Reference to food

    cout << food << endl;
    cout << meal << endl;
    //Both will output Pizza

    return 0;
}