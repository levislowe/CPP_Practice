#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break; //used to jump out of the loop
        }
        cout << i << endl;
    }
    cout << endl;
    
    for (int a = 0; a < 10; a++) {
        if (a == 4) {
            continue; //used to break on iteration in the loop
        }
        cout << a << "\n";
    }
    cout << endl;
    
    int j = 0;
    while (j < 10) {
        cout << j << endl;
        j++;
        if (j == 4) {
            break;
        }
    }
    cout << endl;
    
    int k = 0;
    while (k < 10) {
        if (k == 4) {
            k++;
            continue;
        }
        cout << k << endl;
        k++;
    }
    cout << endl;

    return 0;
}