// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/E

//** Reverse Pairs: i < j and arr[i] > 2 * arr[j] **//

#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    vector<int> temp;

    long long count = 0;

    while (i <= mid)
    {
        while (j <= right && (long long)arr[i] > 2LL * arr[j])
        {
            j++;
        }
        count += (j - (mid + 1)); // All elements from mid+1 to j-1 are valid pairs with arr[i]
        i++;
    }

    i = left, j = mid + 1;
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

    // Copy the merged elements back to the original array
    for (int k = 0; k < temp.size(); k++)
    {
        arr[left + k] = temp[k];
    }

    return count;
}

long long merge_sort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return 0;

    int mid = left + (right - left) / 2;

    long long count = 0;

    count += merge_sort(arr, left, mid);
    count += merge_sort(arr, mid + 1, right);

    count += merge(arr, left, mid, right);

    return count;
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

    long long count = merge_sort(arr, 0, n - 1);
    cout << count << endl;
    return 0;
}