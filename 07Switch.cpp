#include <iostream>
using namespace std;

int main() {
    int day = 7;
    switch(day) {
        case 1: //code block 1
            cout << "Monday";
            break;
        case 2: //code block 2
            cout << "Tuesday";
            break;
        case 3: //code block 3
            cout << "Wednesday";
            break;
        case 4: //code block 4
            cout << "Thursday";
            break;
        case 5: //code block 5
            cout << "Friday";
            break;
        case 6: //code block 6
            cout << "Saturday";
            break;
        default: //code block default
            cout << "Sunday";
            break;
    }
    cout << endl;

    return 0;
}