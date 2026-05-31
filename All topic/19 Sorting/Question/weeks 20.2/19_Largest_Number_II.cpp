// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/S

#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a; // sort in descending order
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr[i] = to_string(x);
    }

    sort(arr.begin(), arr.end(), cmp);

    // print

    if (arr[0] == "0")
    { // if the largest number is "0", then all numbers are "0"
        cout << "0";
        return 0;

        //* Example: If the input is 3 0 0 0, the output should be "0" instead of "000".
    }

    string ans;
    for (string x : arr)
    {
        ans += x;
    }
    cout << ans;

    return 0;
}