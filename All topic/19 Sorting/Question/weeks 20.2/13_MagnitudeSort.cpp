// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/M

#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if(abs(a) != abs(b)){
        return abs(a) < abs(b); // sort by the magnitude (absolute value)
    }

    return a < b; // if magnitudes are equal, sort by the actual value
}
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort by the magnitude (absolute value)
    sort(arr.begin(), arr.end(), cmp);

    // print
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}