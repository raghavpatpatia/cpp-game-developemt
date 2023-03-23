#include <iostream>

using std::cout;
using std::endl;
int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = 
    {
        {'X', ' ', 'O'},
        {' ', 'O', 'O'},
        {'X', 'O', 'X'}
    };
    cout << endl << "Tic-Tac-Toe board: " << endl << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl << "Adding 'X' at [1][0] position:" << endl << endl;
    board[1][0] = 'X';
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl << "'X' wins the game!!!" << endl;
    return 0;
}