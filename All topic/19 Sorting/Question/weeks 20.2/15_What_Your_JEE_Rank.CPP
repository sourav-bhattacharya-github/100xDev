// Link: https://codeforces.com/group/4vcXCPx8NY/contest/694780/problem/O

#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int totalMarks;
    int mathsMarks;
    int physicsMarks;
    int chemMarks;
};

bool cmp(Student a, Student b)
{
    if (a.totalMarks != b.totalMarks)
    {
        return a.totalMarks > b.totalMarks;
    }
    if (a.mathsMarks != b.mathsMarks)
    {
        return a.mathsMarks > b.mathsMarks;
    }
    if (a.physicsMarks != b.physicsMarks)
    {
        return a.physicsMarks > b.physicsMarks;
    }
    return a.name < b.name; // if total marks, maths marks, and physics marks are equal, sort by name in ascending order
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].totalMarks >> students[i].physicsMarks >> students[i].chemMarks >> students[i].mathsMarks;
    }

    sort(students.begin(), students.end(), cmp);

    // print
    for (const Student &s : students)
    {
        cout << s.name << " " << s.totalMarks << " " << s.physicsMarks << " " << s.chemMarks << " " << s.mathsMarks << "\n";
    }

    return 0;
}