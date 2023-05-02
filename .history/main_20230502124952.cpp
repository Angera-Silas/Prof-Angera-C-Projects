#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct students
{
    string name;
    string regno;
    char genger;
};
struct subjects
{
};
class Student_info
{
    protected:
    float fees = 42000.00;
public:
    int n;
    Student_info()
    {
        cout << "Enter the number of students in class" << endl;
        cin>>n;
        students stud[n];
        for(int i = 0;i<n;++i)
        {
            cout<<"ENTER INFORMATION FOR STUDENT INDEX"<<(i+1)<<endl;
        }
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
    cout << "Hello, world!\n";
    Display_info Obj1;
    return 0;
}
