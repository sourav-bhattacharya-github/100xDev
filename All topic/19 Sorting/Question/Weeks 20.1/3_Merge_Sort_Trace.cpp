// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/C

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    vector<int> temp;

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

    for (int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left];
    }

    // Print merge result
    cout << "Merge: [" << left << " " << right << "] ->";
    for (int k = left; k <= right; k++)
    {
        cout << " " << arr[k];
    }
    cout << endl;
}

void merge_sort(vector<int> &arr, int left, int right)
{
    // Base case
    if (left >= right)
        return;

    // Print divide step
    cout << "Divide: [" << left << " " << right << "]" << endl;

    int mid = left + (right - left) / 2;

    // Recursively sort the left half
    merge_sort(arr, left, mid);
    // Recursively sort the right half
    merge_sort(arr, mid + 1, right);

    // Merge the two halves
    merge(arr, left, mid, right);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(arr, 0, n - 1);

    return 0;
}