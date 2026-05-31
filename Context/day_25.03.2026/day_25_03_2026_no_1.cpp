#include <bits/stdc++.h>
using namespace std;

long long countDivisors(long long n)
{
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}

int main()
{
    long long A, B;
    cin >> A >> B;

    long long fA = countDivisors(A);
    long long fB = countDivisors(B);

    if (fA > fB)
        cout << "A";
    else if (fB > fA)
        cout << "B";
    else
        cout << "DRAW";

    return 0;
}