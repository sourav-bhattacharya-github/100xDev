//** Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/L

#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, int N, vector<vector<int>> &grid, vector<vector<bool>> &visited, vector<string> &path, vector<vector<string>> &ans)
{
    // base case
    if (i == N - 1 && j == N - 1)
    {
        ans.push_back(path);
        return;
    }
    //** Matain lexicographically smallest order for the answer, we will move in the order of D < L < R < U */ 

    // move down
    if (i + 1 < N && grid[i + 1][j] == 1 && visited[i + 1][j] == false)
    {
        visited[i + 1][j] = true;
        path.push_back("D");
        solve(i + 1, j, N, grid, visited, path, ans);
        path.pop_back();
        visited[i + 1][j] = false;
    }

    // move left
    if (j - 1 >= 0 && grid[i][j - 1] == 1 && visited[i][j - 1] == false)
    {
        visited[i][j - 1] = true;
        path.push_back("L");
        solve(i, j - 1, N, grid, visited, path, ans);
        path.pop_back();
        visited[i][j - 1] = false;
    }

    // move right
    if (j + 1 < N && grid[i][j + 1] == 1 && visited[i][j + 1] == false)
    {
        visited[i][j + 1] = true;
        path.push_back("R");
        solve(i, j + 1, N, grid, visited, path, ans);
        path.pop_back();
        visited[i][j + 1] = false;
    }

    // move up
    if (i - 1 >= 0 && grid[i - 1][j] == 1 && visited[i - 1][j] == false)
    {
        visited[i - 1][j] = true;
        path.push_back("U");
        solve(i - 1, j, N, grid, visited, path, ans);
        path.pop_back();
        visited[i - 1][j] = false;
    }
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> grid[i][j];
        }
    }

    // No path possible
    if (grid[0][0] == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<vector<bool>> visited(N, vector<bool>(N, false));
    visited[0][0] = true;
    vector<string> path;
    vector<vector<string>> ans;
    solve(0, 0, N, grid, visited, path, ans);

    // print the answer
    cout << ans.size() << endl;
    for (const auto &p : ans)
    {
        for (const string &move : p)
            cout << move;
        cout << endl;
    }

    return 0;
}