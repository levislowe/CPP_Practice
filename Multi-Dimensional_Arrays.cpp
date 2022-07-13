#include <iostream>
using namespace std;

int main() {
    string letters1[2][3] = { //creates an array with 2 rows and 3 columns
        { "A", "B", "C" },
        { "C", "E", "F" }
    };

    string letters2[2][3][4] = { //creates two arrays with 2 rows and 2 columns
        {
            { "A", "B", "C", "D" },
            { "E", "F", "G", "H" },
            { "H", "I", "J", "K" }
        },
        {
            { "L", "M", "N", "O" },
            { "P", "Q", "R", "S" },
            { "T", "U", "V", "W" }
        }
    };

    cout << letters1[0][2] << endl;
    cout << letters2[1][0][2] << endl;

    letters1[0][0] = "Z";

    cout << letters1[0][0] << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << letters1[i][j] << endl;
        }
    }

    for (int k = 0; k < 2; k++) {
        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 4; n++) {
                cout << letters2[k][m][n] << endl;
            }
        }
    }

    bool ships[4][4] = { // We  put 1 to indicate there is a ship
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };
    
    //Keep track of how many hits the player has and how many they have played
    int hits = 0;
    int numberOfTurns = 0;

    //Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates" << endl;

        //Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;
        cout << endl;

        //Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;
        cout << endl;

        //Check if a ship exists in those coordinates
        if (ships[row][column]) {
            //If the player hit a ship, remove it by setting the value to zero
            ships[row][column] = 0;

            //Increase the hit counter
            hits++;

            //Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hits) << " left" << endl;
        } else {
            //Tell the player that they missed
            cout << "Miss" << endl;
        }

        //Count how many turns the player has taken
        numberOfTurns++;
    }
    cout << "Victory!" << endl;
    cout << "You won it in " << numberOfTurns << " turns" << endl;

    return 0;
}