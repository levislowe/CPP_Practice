#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; // returns 1 (true), because 10 is higher than 9
    cout << (x < y) << endl; // returns 0 (false), because 10 is not less than 9
    cout << (x == 10) << endl; //returns 1 (true), because 10 is equal to 10
    cout << (x == 15) << endl; //returns 0 (false), because 15 is not equal to 10

    return 0;
}