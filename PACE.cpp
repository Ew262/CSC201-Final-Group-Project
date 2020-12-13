#include <iostream>
#include <iomanip>

using namespace std;
enum orientation {horizontal, vertical};

struct PositionType {
    int row;
    int col;
};

struct ShipType {
    char carrier[5]; // vertical
    char battleship[4]; // horizontal
    char cruiser[3]; // vertical
    char submarine[3]; // horizontal
    char destroyer[2]; // vertical
};

const int MAX_SIZE = 8;

struct GameType {
    char gridArray[MAX_SIZE][MAX_SIZE];
    int arrayGrid[MAX_SIZE];
    int shipLocations[MAX_SIZE][MAX_SIZE];
    ShipType ship;
    PositionType position;
};

// creates and returns a random number when called
// Pre: none
// Post: returns a random number
int RandNumGen();

// prints rules to screen
// Pre: none
// Post: prints game rules to screen
void PrintRules();

// Initializes battlefield
// Pre: valid gridArray char
//    valid shipLocations char
// Post: returns char 2D array
void InitBattlefield(/* INOUT */ char gridArray[][MAX_SIZE], int arrayGrid[MAX_SIZE], int &rowLength);

// prints updated battleship to screen
// Pre: valid const int array
// Post: returns formatted
void PrintBattlefield(/* IN */ const char array[][MAX_SIZE], int arrayGrid[MAX_SIZE], int rowLength);

// prompts user for guess
// Pre: valid x int
//    valid y int
// Post: prompts and returns user input
void PromptGuesses(int &x, int &y);

// interperets guesses
// Pre: valid gridArray char
//      valid shipLocations char
//      valid x int
//      valid y int
// Post: returns wether a ship is hit missed
//       and changes board with each input
bool InterpretGuesses(int x, int y);

// for making sure ships don't overlap
// Pre:
void CollisionCheck(const int shipLocations[][MAX_SIZE]);
 
int main() {
    char arrayBoard[MAX_SIZE][MAX_SIZE];
    int arrayGrid[MAX_SIZE];
    int shipLocations[MAX_SIZE][MAX_SIZE];
    int rowLength = 1; // set to one for ease of use for user
    int xGuess;
    int yGuess;
    
    PrintRules();
    InitBattlefield(arrayBoard, arrayGrid, rowLength);
    
    // while loop
        PrintBattlefield(arrayBoard, arrayGrid, rowLength);
        PromptGuesses(xGuess, yGuess);
        InterpretGuesses (xGuess, yGuess);
        CollisionCheck(shipLocations);
    // while all ships are not hits and while user is still wants to play
    
    return 0;
}

int RandNumGen() {
    int x = 1;
    cout << "RandNumGen()\n";
    return x;
}

void PrintRules() {
    cout << "PrintRules()\n";
}

void InitBattlefield(/* INOUT */ char arrayBoard[][MAX_SIZE], int arrayGrid[MAX_SIZE], int &rowLength) {
    for (int row = 0; row < 8; row++) {
        arrayGrid[row] = rowLength++;
        for (int col = 0; col < 8; col++) {
            arrayBoard[row][col] = '~';
        }
    }
}

void PrintBattlefield(/* IN */ const char arrayBoard[][MAX_SIZE], int arrayGrid[MAX_SIZE], int rowLength) {
    cout << ' ';
    for (int row = 0; row < 8; row++) {
            cout << setw(6) << arrayGrid[row];
        }
    
    cout << endl;

    for (int row = 0; row < 8; row++) {
        cout << arrayGrid[row];
        for (int col = 0; col < 8; col++) {
            cout << setw(6) << arrayBoard[row][col];
        }
        cout << endl;
    }
}

void PromptGuesses(int &x, int &y) {
    cout << "PromptGuesses\n";
}

bool InterpretGuesses(int x, int y) {
    cout << "InterpretGuesses\n";
    return true;
}

void CollisionCheck(const int shipLocations[][MAX_SIZE]) {
    cout << "CollisonCheck\n";
}
