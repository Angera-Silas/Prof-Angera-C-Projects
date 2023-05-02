#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct students
{
    string name;
    char regno[30];
    char gender[6];
    int form;
    char stream[2];
    float fees_paid,balance;
    int subjects_taking;
};
struct subjects
{
    string subject_name;
    char subject_code[10];
    int papers;
    int exams_taken;
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
            cout<<"Student name"<<endl;
            getline(cin,stud[i].name);
            cout<<"Enter registration number"<<endl;
            cin>>stud[i].regno;
            cout<<"Student Gender"<<endl;
            cin>>stud[i].
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
