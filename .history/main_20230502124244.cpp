#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct students
{
};
struct subjects
{
};
class Student_info
{
public:
    int n;
    Student_info()
    {
        cout << "Enter the number of students in class" << endl;
        cin>>n;
    }
};
class Subjects
{
public:
    Subjects()
    {
    }
};
class Display_info : public Student_info, public Subjects
{
public:
    Display_info()
    {
    }
};
int main(int, char **)
{
    cout << "Hello, world!\n"
         << endl;
    Display_info Obj1;
    return 0;
}
