// LinK: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/H

#include <bits/stdc++.h>
using namespace std;

vector<string> keypad = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void solve(int i, string &digits, string path, vector<string> &ans)
{
    if (i == digits.size())
    {
        ans.push_back(path);
        return;
    }

    int digit = digits[i] - '0';

    string choice = keypad[digit];

    for (char c : choice)
    {
        path.push_back(c);
        solve(i + 1, digits, path, ans);
        path.pop_back();
    }
}

int main()
{
    string s;
    cin >> s;

    vector<string> ans;
    solve(0, s, "", ans);

    cout << ans.size() << endl;
    for (const string &comb : ans)
    {
        cout << comb << endl;
    }
    return 0;
}