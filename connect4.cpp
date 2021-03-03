#include <iostream>
#include <string>

using namespace std;

void printTable(char table[][7]);
bool gameEnd(char table[][7]);
void makeChange(char table[][7], int num);
bool checkAvail(char table[][7], int num);

int main()
{
    string player1, player2;

    cout << "Enter Player1's Nickname: ";
    cin >> player1;
    cout << "Enter Player2's Nickname: ";
    cin >> player2;

    //while (gameEnd = 1)
    // {
    // Game keeps going
    //}

    char table[6][7] = {' '}; // This table has 6 rows and 7 columns
    printTable(table);
}

// This function prints the play ground
void printTable(char table[][7])
{
    int row = 6;
    int column = 7;

    for (int i = 0; i < row; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "|";
        for (int j = 0; j < column; j++)
        {
            cout << " " << table[i][j] << " |";
        }
        cout << endl;
    }
}

// This function checks if game ends or not
bool gameEnd(char table[][7])
{
    // This loop checks horizontal four in a row
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (table[i][j] == table[i][j + 1] && table[i][j + 1] == table[i][j + 2] && table[i][j + 2] == table[i][j + 3])
            {
                return 1;
            }
        }
    }

    // This look check vertical four in a row
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (table[i][j] == table[i + 1][j] && table[i + 1][j] == table[i + 2][j] && table[i + 2][j] == table[i + 3][j])
            {
                return 1;
            }
        }
    }

    // Diagonal from up-left to down-right

    // Diagonal from up-right to down-left
}

void makeChange(char table[][7], int num)
{
    if ()
}

int findPos(char table[][7], int num)
{
    for (int i = 0; i < 6; i++)
    {
        if (table[i][num] == ' ')
        {
            return true;
        }
    }
}