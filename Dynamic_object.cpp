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

    char name[100] = "Rahim Khan";

    // Student *rahim=new Student;//without constructor

    Student *rahim = new Student(22, 12, 'B', name); // with constructor
   cout<<rahim->name<<endl;
    return 0;
}