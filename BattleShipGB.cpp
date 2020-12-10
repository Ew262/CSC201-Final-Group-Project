// Ezra Thomas

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char arrBoard[8][8];
    int arrGrid[8];
    int rowLength = 1;          // set to one for ease of use for user

    for (int row = 0; row < 8; row++) {
        arrGrid[row] = rowLength++;
        for (int col = 0; col < 8; col++) {
            arrBoard[row][col] = '~';
        }
    }
    cout << ' ';
    for (int row = 0; row < 8; row++) {
            cout << setw(6) << arrGrid[row];
        }
    
    cout << endl;

    for (int row = 0; row < 8; row++) {
        cout << arrGrid[row];
        for (int col = 0; col < 8; col++) {
            cout << setw(6) << arrBoard[row][col];
        }
        cout << endl;
    }
}