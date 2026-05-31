// LinK: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/I

#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int> &arr, int target, vector<int> &path, vector<vector<int>> &ans)
{
    // base case
    if (target == 0)
    {
        ans.push_back(path);
        return;
    }

    // out of bound case
    if (i == arr.size() || target < 0)
        return;

    // take the element
    if (arr[i] <= target)
    {
        path.push_back(arr[i]);
        solve(i, arr, target - arr[i], path, ans);
        path.pop_back();
    }
    // do not take the element
    solve(i + 1, arr, target, path, ans);
}

int main()
{
    int N, target;
    cin >> N >> target;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    vector<int> path;
    vector<vector<int>> ans;

    solve(0, arr, target, path, ans);

    cout << ans.size() << endl;
    for (const auto &comb : ans)
    {
        cout << comb.size() << " ";
        for (int x : comb)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}