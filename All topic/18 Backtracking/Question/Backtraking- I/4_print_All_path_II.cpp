// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/D

#include <bits/stdc++.h>
using namespace std;

void f(int i, int j, int N, int M, vector<vector<int>> &grid, vector<string> &path)
{
    // oust of bound case
    if (i == N || j == M || grid[i][j] == 1)
        return;

    // base case
    if (i == N - 1 && j == M - 1)
    {
        for (auto x : path)
            cout << x;
        cout << endl;
        return;
    }

    // move right
    path.push_back("R");
    f(i, j + 1, N, M, grid, path);
    path.pop_back();

    // move down
    path.push_back("D");
    f(i + 1, j, N, M, grid, path);
    path.pop_back();
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<string> path;

    f(0, 0, N, M, grid, path);

    return 0;
}