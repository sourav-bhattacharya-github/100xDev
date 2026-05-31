// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.

    cin.tie(nullptr); // Unties cin from cout, preventing automatic flushing before input operations

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort in descending order
    vector<int> freq(10, 0);

    for (int x : arr)
    {
        freq[x]++;
    }

    // print
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << i;
        }
    }

    return 0;
}