// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/A

#include <bits/stdc++.h>
using namespace std;

void merge_arrays(vector<int> &a, vector<int> &b, vector<int> &merged)
{
    int n = a.size(), m = b.size();
    int i = 0, j = 0;

    // Merge both arrays
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            merged.push_back(a[i]);
            i++;
        }
        else
        {
            merged.push_back(b[j]);
            j++;
        }
    }

    // If there are remaining elements in array a
    while (i < n)
    {
        merged.push_back(a[i]);
        i++;
    }

    // If there are remaining elements in array b
    while (j < m)
    {
        merged.push_back(b[j]);
        j++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> merged;

    //* Manual merging of two sorted arrays
    merge_arrays(a, b, merged);

    for (int i : merged)
        cout << i << " ";


    /*
    //* The merge function from the <algorithm> library can be used to merge two sorted ranges into a single sorted range.

    merge(a.begin(), a.end(), b.begin(), b.end(), merged.begin());

    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";
    */
    return 0;
}