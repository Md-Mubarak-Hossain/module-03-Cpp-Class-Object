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
        strcpy(name,n);
    }
};


Student fun()
{
    char name[100] = "Rahim Uddin Khan";
    Student r(20, 8, 'A', name);
    return r;
}


int main()
{
    Student rahim = fun();
    cout << rahim.name;
    return 0;
}