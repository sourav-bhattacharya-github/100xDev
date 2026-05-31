#include <bits/stdc++.h>
using namespace std;

void f(int i, int j, int N, int M, string &path)
{
    // out of bound
    if (i >= N || j >= M)
        return;

    // base case
    if (i == N - 1 && j == M - 1)
    {
        cout << path << endl;
        return;
    }

    // move right
    path.push_back('R');
    f(i, j + 1, N, M, path);
    path.pop_back();

    // move down
    path.push_back('D');
    f(i + 1, j, N, M, path);
    path.pop_back();
}

int main()
{
    int N, M;
    cin >> N >> M;

    string path = "";

    f(0, 0, N, M, path);

    return 0;
}