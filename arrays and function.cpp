#include<iostream>
using namespace std;
int avg(int marks[]);
int main()
{
    int marks[5];
    int c = avg(marks);
    cout<<"Average: "<<c<<endl;
    return 0;
}
int avg(int marks[5])
{
    int sum = 0;
    float average;
    for(int i = 0;i<5;i++)
    {
        cout<<"Enter Marks"<<i+1<<endl;
        cin>>marks[i];
        sum = sum+marks[i];
    }
    average = sum/5;
    return average;
}
