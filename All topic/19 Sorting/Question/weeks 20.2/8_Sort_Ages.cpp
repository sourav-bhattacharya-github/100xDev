// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/H

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.

    cin.tie(nullptr); // Unties cin from cout, preventing automatic flushing before input operations

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort in ascending order
    vector<int> freq(101, 0);
    for(int x : arr){
        freq[x]++;
    }

    // print
    for(int i = 0; i < 101; i++){
        while(freq[i]--){
            cout << i << " ";
        }
    }

    return 0;
}