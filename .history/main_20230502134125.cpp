#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int form;
struct students
{
    string name;
    char regno[30];
    char gender[6];
    char stream[2];
    float fees_paid,balance;
    int subjects_taking;
    long agp;
};
struct subjects
{
    string subject_name;
    char subject_code[10];
    int exams_taken;
    float scores[3];
    float sum = 0;
    long avg;
    long total = 0;
};
class Student_info
{
    protected:
    float fees = 42000.00;
public:
    int n;
    Student_info()
    {
        cout<<"Please Enter the Class i.e 4 w"<<endl;
        cin>>form;
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
            cin>>stud[i].gender;
            cout<<"Which Stream of form "<<form<<"i.e w"<<endl;
            cin>>stud[i].stream;
            cout<<"Enter the number of subjects taking"<<endl;
            cin>>stud[i].subjects_taking;
            cout<<"Enter the fees paid"<<endl;
            cin>>stud[i].fees_paid;
            stud[i].balance = fees - stud[i].fees_paid;
        }
    }
};
class Subjects:public Student_info
{
public:
float s;
    Subjects()
    {
        students stud[n];
        subjects sub[(stud[n].subjects_taking)];
        for (int i=0;i<stud[i].subjects_taking;i++)
        {
            cout<<"Enter Student index "<<(i+1)<<" subjects details"<<endl;
            cout<<"Subject name"<<endl;
            cin>>sub[i].subject_name;
            cout<<"Enter subject Code"<<endl;
            cin>>sub[i].subject_code;
            cout<<"Enter the number of Exams taken on this Subject"<<endl;
            cin>>sub[i].exams_taken;
            for (int j=0;j<sub[i].exams_taken;j++)
            {
                cout<<"Paper "<<(j+1)<<" Score"<<endl;
                cin>>sub[i].scores[j];
                sub[i].sum = sub[i].sum+sub[i].scores[j];
            }
            sub[i].avg = sub[i].sum/sub[i].exams_taken;
            sub[i].total=sub[i].total+sub[i].avg;
        }
        stud->agp=sub->total
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
