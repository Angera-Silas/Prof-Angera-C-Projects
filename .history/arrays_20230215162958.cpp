#include<iostream>
using namespace std;
int main()
{
    int marks[5],i,sum=0;
    for(i=0;i<+5;i++)
    {
        cout<<(i+1)<<"Enter marks: "<<endl;
        cin>>marks[i];
        sum=sum+marks[i];
    }
    cout<<"sum is "<<sum<<endl;
}