#include<iostream>
using namespace std;
float hoursec(float hours)
{
    float mins,secs;
    mins = hours * 60;
    secs = mins * 60;
    return secs;
}
int main()
{
    float hours;
    cout<<"Enter number of Hours"<<endl;
    cin>>hours;
    cout<<hoursec(hours)<<" Seconds"<<endl;
    return 0;
}
