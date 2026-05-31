// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/N

#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks != b.marks)
    {
        return a.marks > b.marks; // sort by marks in descending order
    }
    return a.name < b.name; // if marks are equal, sort by name in ascending order
}
int main()
{
    ios::sync_with_stdio(false); // Makes cin/cout faster by disabling synchronization with scanf/printf.
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].marks;
    }

    sort(students.begin(), students.end(), cmp);

    for (const Student &s : students)
    {
        cout << s.name << " " << s.marks << "\n";
    }

    return 0;
}