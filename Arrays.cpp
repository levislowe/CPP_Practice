#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];
    cout << endl;
    cars[0] = "Opel";
    cout << cars[0];
    cout << endl;

    return 0;
}