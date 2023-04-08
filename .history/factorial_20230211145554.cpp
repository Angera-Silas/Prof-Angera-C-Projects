#include<iostream>
using namespace std;
int main()
{
    int a,fact=1,i;
    cout<<"Enter the number: 5";
    cin>>a;
    for(i=a;i>0;i--)
    {
        fact*=i;
    }
    cout<<"factorial of "<<a<<" is "<<fact<<"\n";
    return 0;
}