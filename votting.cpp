#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\n Member Eligible for voting";
    }
    else
    {
        cout<<"\n Member .Not Eligible for voting";
    }
    return 0;
}

