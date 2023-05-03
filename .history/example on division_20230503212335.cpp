#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    c=a/b;
    d=a%b;
    cout<<"quotient of "<<a<<"/"<<b<<" = "<<c;
    cout<<" remainder of "<<d;
    return 0;

}
