//* https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/N

#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &board, int row, int col, char c)
{
    // Check row
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == c)
            return false;
    }

    // Check column
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c)
            return false;
    }

    // Check 3x3 sub-box
    int boxRow = (row / 3) * 3;
    int boxCol = (col / 3) * 3;
    for (int i = boxRow; i < boxRow + 3; i++)
    {
        for (int j = boxCol; j < boxCol + 3; j++)
        {
            if (board[i][j] == c)
                return false;
        }
    }

    return true;
}

bool solveSudoku(vector<vector<char>> &board)
{
    // base case: if there is no empty cell, the Sudoku is solved
    bool isEmpty = false;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty)
            break;
    }
    if (!isEmpty)
        return true; // Sudoku is solved

    // Try to fill the empty cell with a valid number
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solveSudoku(board))
                            return true;
                        board[i][j] = '.'; // Backtrack
                    }
                }
                return false; // No valid number found
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board(9, vector<char>(9));

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
        }
    }

    solveSudoku(board);

    // Print the solved Sudoku board
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}