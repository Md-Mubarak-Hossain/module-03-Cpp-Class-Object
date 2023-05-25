#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int cls;
    Student(int r, int c, char s, char *n) // constructor
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    Student rahim(20, 8, 'A', "Rahim Uddin"); // constructor
    cout << rahim.name;
    return 0;
}