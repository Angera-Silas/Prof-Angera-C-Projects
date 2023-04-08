#include<iostream>
#include<string>
using namespace std;
struct student_info
{
    char name[20];
    string roll_no;
    int age;
};
int main()
{
    student_info student1;
    cout<<"Enter Student Name: ";
    cin>>student1.name;
    cout<<"Enter Student Roll no: ";
    cin>>student1.roll_no;
    cout<<"Enter Student Age: ";
    cin>>student1.age;

    cout<<"Student Record"<<endl;
    cout<<"Name: "<<student1.name<<endl;
    cout<<"Roll No: "<<student1.roll_no<<endl;
    cout<<"Age: "<<student1.age<<endl;
    return 0;
}
