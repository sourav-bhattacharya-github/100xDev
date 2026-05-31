//* https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/M

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n)
{
    // same column
    int i = row, j = col;
    while (i >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
    }

    // diagonal upper left
    i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // diagonal upper right
    i = row, j = col;
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j++;
    }

    // If no queen can attack the current position, it's safe
    return true;
}

void solveNQ(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    // base case
    if (row == n)
    {
        ans.push_back(board);
        return;
    }

    // Try every column in the current row
    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q'; // Place the queen

            solveNQ(board, row + 1, n, ans); // Recur to place the next queen

            board[row][col] = '.'; // Backtrack and remove the queen
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    solveNQ(board, 0, n, ans);

    // Print all the solutions
    cout << ans.size() << endl; // Print the number of solutions
    for (const auto &solution : ans)
    {
        for (const auto &row : solution)
        {
            cout << row << endl;
        }
        cout << endl; // Separate different solutions by a blank line
    }

    return 0;
}