#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{

    Student rahim;
    rahim.cls=7;
    rahim.roll=29;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);
    cout<<rahim.name<<endl<<rahim.section;
    return 0;
}