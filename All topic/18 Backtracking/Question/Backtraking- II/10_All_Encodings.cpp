// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/J

#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int i, string curr, vector<string> &ans)
{
    // base case
    if (i == s.size())
    {
        ans.push_back(curr);
        return;
    }

    // take one character
    int oneDigit = s[i] - '0';
    char ch1 = 'a' + oneDigit - 1;

    curr.push_back(ch1);
    solve(s, i + 1, curr, ans);
    curr.pop_back();

    // take two characters
    if (i + 1 < s.size())
    {
        int twoDigit = (s[i] - '0') * 10 + (s[i + 1] - '0');

        if (twoDigit <= 26)
        {
            char ch2 = 'a' + twoDigit - 1;
            curr.push_back(ch2);
            solve(s, i + 2, curr, ans);
            curr.pop_back();
        }
    }
}

int main()
{
    string s;
    cin >> s;

    vector<string> ans;
    solve(s, 0, "", ans);

    cout << ans.size() << endl;
    for (const string &str : ans)
        cout << str << endl;

    return 0;
}