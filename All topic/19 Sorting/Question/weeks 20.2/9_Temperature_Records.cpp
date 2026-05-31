// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.
    cin.tie(nullptr);            // Unties cin from cout, preventing automatic flushing before input operations

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort in ascending order
    vector<int> freq(101, 0);
    for (int x : arr)
    {
        freq[x + 50]++;
    }

    // print
    for (int i = 0; i < 101; i++)
    {
        while (freq[i]--)
        {
            cout << i - 50 << " ";
        }
    }

    return 0;
}

// Time Complexity: O(n + k) where n is the number of temperature records and k is the range of possible temperatures (in this case, 101 for temperatures from -50 to 50).
// Space Complexity: O(k) where k is the range of possible temperatures (in this case, 101 for temperatures from -50 to 50).
