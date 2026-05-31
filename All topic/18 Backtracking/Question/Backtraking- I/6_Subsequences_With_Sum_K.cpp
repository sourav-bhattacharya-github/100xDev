// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/F

#include <bits/stdc++.h>
using namespace std;

void SubsequencesEqualtoK(int i, long long sum, vector<int> &arr, int K, vector<int> &path, vector<vector<int>> &ans)
{
    // base case
    if (i == arr.size())
    {
        if (sum == K)
        {
            ans.push_back(path);
        }
        return;
    }

    // take the element
    path.push_back(arr[i]);
    SubsequencesEqualtoK(i + 1, sum + arr[i], arr, K, path, ans);
    path.pop_back();

    // do not take the element
    SubsequencesEqualtoK(i + 1, sum, arr, K, path, ans);
}
int main()
{
    int n;
    long long K;
    cin >> n >> K;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> path;
    vector<vector<int>> ans;

    SubsequencesEqualtoK(0, 0, arr, K, path, ans);

    // print the answer
    cout << ans.size() << endl;
    for (auto &v : ans)
    {
        for (auto &x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}