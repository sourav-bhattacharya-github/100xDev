// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/Q
#include <bits/stdc++.h>
using namespace std;

struct Order
{
    long long orderId;
    long long timestamp;
    long long priority;
};

bool cmp(Order o1, Order o2)
{
    if (o1.priority != o2.priority)
    {
        return o1.priority > o2.priority; // sort by priority in descending order
    }
    if (o1.timestamp != o2.timestamp)
    {
        return o1.timestamp < o2.timestamp; // if priorities are equal, sort by timestamp in ascending order
    }
    return o1.orderId < o2.orderId; // if priorities and timestamps are equal, sort by order ID in ascending order
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Order> orders(n);
    for (int i = 0; i < n; i++)
    {
        cin >> orders[i].orderId >> orders[i].timestamp >> orders[i].priority;
    }

    sort(orders.begin(), orders.end(), cmp);

    // print
    for (const Order &o : orders)
    {
        cout << o.orderId << " " << o.timestamp << " " << o.priority << "\n";
    }

    return 0;
}