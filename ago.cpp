#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"before swapping a="<<a<<" and b="<<b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping a="<<a<<" and b="<<b;
    return 0;
}

