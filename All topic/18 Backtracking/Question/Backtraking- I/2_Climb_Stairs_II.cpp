// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/B

#include <bits/stdc++.h>
using namespace std;

void f(int curr, int N, int K, vector<int> &path)
{
    if (curr == N)
    {
        for (auto x : path)
            cout << x << " ";
        cout << endl;
        return;
    }

    if (curr > N)
        return;

    // jump K step
    for (int i = 1; i <= K; i++)
    {
        path.push_back(i);
        f(curr + i, N, K, path);
        path.pop_back();
    }
}

int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    vector<int> path;

    f(0, N, K, path);
    return 0;
}

/*
Time Complexity: O(K^N) where K is the maximum jump and N is the total number of stairs. This is because in the worst case, we can make K choices at each step for N steps.


*/