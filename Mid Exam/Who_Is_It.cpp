#include <iostream>
using namespace std;

class Student {

public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main() 
{
    int n;
    cin >> n;

    while (n--) 
    {
        Student s[3];

        
        for (int i = 0; i < 3; i++)
         {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].total_marks;
        }

      
        Student best = s[0];
        for (int i = 1; i < 3; i++) 
        {
            if (s[i].total_marks > best.total_marks) 
            {
                best = s[i];
            } 
            else if (s[i].total_marks == best.total_marks && s[i].id < best.id) 
            {
                best = s[i];
            }
        }

        
        cout << best.id << " " << best.name << " " << best.section << " " << best.total_marks << endl;
    }

    return 0;
}
