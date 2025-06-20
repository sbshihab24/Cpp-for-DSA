#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id;
    string name;
    int cls;
    char section;
    int math_marks;
    int english_marks;
};


bool cmp(Student l, Student r)
{
    int total_l = l.math_marks + l.english_marks;
    int total_r = r.math_marks + r.english_marks;

    if (total_l > total_r)
    {
        return true;
    }
    else if (total_l == total_r)
    {
        return l.id < r.id;  // ascending order by ID
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }

    
    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " "
             << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }

    return 0;
}
