#include<iostream>
using namespace std;
int f(int n)
{
    if(n<=1)
        return 1;
    else
        return n*f(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Factorial of entered number "<<num<<" is "<<f(num);
    return 0;
}
