#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers) << endl;

    cout << endl;

    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength << endl;

    return 0;
}