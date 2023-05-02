#include<iostream>
using namespace std;
int main()
{
    long num_of_classes_held,num_of_classes_attended;
    float attendance_percentage;
    cout<<" enter the number of classes held :";
    cin>>num_of_classes_held;
    cout<<"enter the number of classes attended :";
    cin>>num_of_classes_attended ;
    attendance_percentage = (num_of_classes_attended/num_of_classes_held);
    cout<<"Attendance percentage = "<<attendance_percentage * 100<<"%"<<endl;
    if(attendance_percentage<80)
    {
        cout<<"not allowed :"<<endl;
    }
    else
    {
        cout<<"you are allowed."<<endl;
    }
    return 0;
}
