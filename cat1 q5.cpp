#include<iostream>
using namespace std;
int main()
{
    int total_lessons;
    int lessons_attended;
    float percentage_attended;
    cout<<"Enter the total number of classes"<<endl;
    cin>>total_lessons;
    cout<<"Enter the number of classes attended by student"<<endl;
    cin>>lessons_attended;

    percentage_attended =(lessons_attended*100)/total_lessons;
    cout<<"Percentage of class attended by the student is "<<percentage_attended<<"%"<<endl;

    if(percentage_attended>=80)
        cout<<"Student allowed to sit for an exam"<<endl;
    else
        cout<<"Student NOT allowed to sit for an exam"<<endl;
    return 0;
}
