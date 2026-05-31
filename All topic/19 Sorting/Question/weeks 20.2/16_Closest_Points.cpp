// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/P

#include <bits/stdc++.h>
using namespace std;

struct Point
{
    long long x, y;
};

long long a, b;

bool cmp(Point p1, Point p2)
{
    long long distA = (p1.x - a) * (p1.x - a) + (p1.y - b) * (p1.y - b);
    long long distB = (p2.x - a) * (p2.x - a) + (p2.y - b) * (p2.y - b);
    if (distA != distB)
    {
        return distA < distB; // sort by distance from (a, b)
    }
    if (p1.x != p2.x)
    {
        return p1.x < p2.x; // if distances are equal, sort by x-coordinate
    }

    return p1.y < p2.y; // if distances and x-coordinates are equal, sort by y-coordinate
}

int main()
{
    int n;
    cin >> n;
    cin >> a >> b;

    vector<Point> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }

    sort(points.begin(), points.end(), cmp);

    // print
    for (Point p : points)
    {
        cout << p.x << " " << p.y << "\n";
    }

    return 0;
}
