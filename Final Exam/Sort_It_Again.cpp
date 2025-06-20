#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    char section;
    long long id; 
    int math_marks;
    int eng_marks;
    int cls;
};


bool cmp(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
         
    else if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks; 
    }
        
    else{
         return a.id < b.id;
    }
       
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " "
             << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
