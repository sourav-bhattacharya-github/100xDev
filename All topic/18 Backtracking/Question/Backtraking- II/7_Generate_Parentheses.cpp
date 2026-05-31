// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/G

#include <bits/stdc++.h>
using namespace std;

void generateParenthesis(int open, int close, int n, string s, vector<string> &path)
{
    // base case
    if (s.size() == 2 * n)
    {
        path.push_back(s);
        return;
    }

    // add opening parenthesis
    if (open < n)
    {
        s.push_back('(');
        generateParenthesis(open + 1, close, n, s, path);
        s.pop_back();
    }

    // add closing parenthesis
    if (close < open)
    {
        s.push_back(')');
        generateParenthesis(open, close + 1, n, s, path);
        s.pop_back();
    }
}

int main()
{
    int N;
    cin >> N;

    vector<string> path;

    generateParenthesis(0, 0, N, "", path);

    cout << path.size() << endl;

    for (const string &s : path)
        cout << s << endl;

    return 0;
}