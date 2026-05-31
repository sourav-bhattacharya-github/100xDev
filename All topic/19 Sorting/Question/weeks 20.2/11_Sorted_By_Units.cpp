// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/K

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    int lastDigitA = abs(a) % 10;
    int lastDigitB = abs(b) % 10;

    if (lastDigitA != lastDigitB)
    {
        return lastDigitA < lastDigitB;
    }
    return a < b; // sort by the number of the last digit (units place)
}
int main()
{
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.
    cin.tie(nullptr);            // Unties cin from cout, preventing automatic flushing before input operations

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort by the number of units (1s in binary representation)
    sort(arr.begin(), arr.end(), cmp);

    // print
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}