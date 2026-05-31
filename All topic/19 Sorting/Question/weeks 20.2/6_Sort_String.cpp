// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.

    cin.tie(nullptr); // Unties cin from cout, preventing automatic flushing before input operations.

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    // print
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            cout << (char)(i + 'a');
        }
    }

    return 0;
}