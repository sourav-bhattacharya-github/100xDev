#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxStreak = 1, currStreak = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            currStreak++;
        }
        else
        {
            currStreak = 1;
        }
        maxStreak = max(maxStreak, currStreak);
    }

    cout << maxStreak;
    return 0;
}