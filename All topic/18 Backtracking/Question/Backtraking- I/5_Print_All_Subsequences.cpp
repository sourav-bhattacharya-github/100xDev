// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/E

#include <bits/stdc++.h>
using namespace std;

void allSubsequences(int i, vector<int> &arr, vector<int> &path)
{
    // base case
    if (i == arr.size())
    {
        for (auto x : path)
            cout << x << " ";
        cout << endl;
        return;
    }

    // Take the element
    path.push_back(arr[i]);
    allSubsequences(i + 1, arr, path);
    path.pop_back();

    // Do not take the element
    allSubsequences(i + 1, arr, path);
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    vector<int> path;

    allSubsequences(0, arr, path);

    return 0;
}
