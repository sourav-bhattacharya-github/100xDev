// Link: https://codeforces.com/group/4vcXCPx8NY/contest/692125/problem/A

#include <bits/stdc++.h>
using namespace std;

void f(int curr, int N, vector<int> &path){
    if(curr == N){
        for(auto x: path) cout << x << " ";
        cout << endl;
        return;
    }

    if(curr >N) return;

    //jump 1 step
    path.push_back(1);
    f(curr+1, N, path);
    path.pop_back();

    //jump 2 step
    path.push_back(2);
    f(curr+2, N, path);
    path.pop_back();
}

int main(){
    int N;
    cin >> N;
    vector<int> path;

    f(0, N, path);
    return 0;
}