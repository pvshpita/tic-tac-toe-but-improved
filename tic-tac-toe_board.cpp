#include <iostream>
using namespace std;

const char EMPTY = ' ';

void displayBoard(char board[3][3]) {

//board 1
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << " " << board[i][j];
            if (j < 2) cout <<" |";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n";

//board 2
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        cout << "     |     |\n";
        for (int j = 0; j < 3; ++j) {
            cout << "  " << board[i][j] << "  ";
            if (j < 2) cout <<"|";
        }
        if (i < 2) cout << "\n_____|_____|_____\n";
        if (i == 2) cout << "\n     |     |\n";
    }
}

int main() {
    char board[3][3] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}
    };

    displayBoard(board);

    return 0;
}

/*
board 1
   |   |
-----------
   |   |
-----------
   |   |

board 2
     |     |
     |     |
_____|_____|_____
     |     |
     |     |
_____|_____|_____
     |     |
     |     |
     |     |
*/
