//** Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/K

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, vector<bool> &used, vector<int> &path, vector<vector<int>> &ans)
{
    // base case
    if (path.size() == arr.size())
    {
        ans.push_back(path);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (used[i] == false)
        {
            used[i] = true;
            path.push_back(arr[i]);
            solve(arr, used, path, ans);
            path.pop_back();
            used[i] = false;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    vector<bool> used(N, false);

    vector<int> path;
    vector<vector<int>> ans;
    solve(arr, used, path, ans);

    cout << ans.size() << endl;
    for (const auto &perm : ans)
    {
        for (int x : perm)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
