// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/L

#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    int lenA = a.length();
    int lenB = b.length();

    if (lenA != lenB)
    {
        return lenA < lenB; // sort by length
    }

    return a < b; // if lengths are equal, sort lexicographically
}
int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), cmp);
    for (const string &s : arr)
    {
        cout << s << "\n";
    }
    return 0;
}