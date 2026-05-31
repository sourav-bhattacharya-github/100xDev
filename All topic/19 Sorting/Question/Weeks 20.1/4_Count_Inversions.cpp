// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/D

//** Count Inversions: i < j and arr[i] > arr[j] */
#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    vector<int> temp;

    long long inversion = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            inversion += (mid - i + 1); // All elements from i to mid are greater than arr[j]
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++)
    {
        arr[left + k] = temp[k];
    }

    return inversion;
}

long long merge_sort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return 0;

    int mid = left + (right - left) / 2;

    long long inversions = 0;

    inversions += merge_sort(arr, left, mid);
    inversions += merge_sort(arr, mid + 1, right);

    inversions += merge(arr, left, mid, right);
    return inversions;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long inversions = merge_sort(arr, 0, n - 1);
    cout << inversions << endl;

    return 0;
}