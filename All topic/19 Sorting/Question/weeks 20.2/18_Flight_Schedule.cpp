// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/R

#include <bits/stdc++.h>
using namespace std;

struct Flight
{
    long long flightNumber;
    int departureTime;
    string destination;
};

bool cmp(const Flight &f1, const Flight &f2)
{
    if (f1.departureTime != f2.departureTime)
    {
        return f1.departureTime < f2.departureTime; // sort by departure time in ascending order
    }

    return f1.flightNumber < f2.flightNumber; // if departure times and destinations are equal, sort by flight number in ascending order
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Flight> flights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> flights[i].flightNumber >> flights[i].departureTime >> flights[i].destination;
    }

    sort(flights.begin(), flights.end(), cmp);

    // print
    for (const Flight &f : flights)
    {
        cout << f.flightNumber << " " << f.departureTime << " " << f.destination << "\n";
    }

    return 0;
}