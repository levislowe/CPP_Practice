#include <iostream>
using namespace std;

int main() {
    int time = 22;
    if (time < 10) { //block of code to be executed if condition1 is true
        cout << "Good Morning" << endl;
    } else if (time < 20) { //block of code to be exexuted if the condition1 is false and contitional2 is true
        cout << "Good Day" << endl;
    } else { //block of code to be executed if the condition1 is false and condition2 is false
        cout << "Good Evening." << endl;
    }
    //Output Good Evening

    return 0;
}