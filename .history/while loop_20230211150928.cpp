#include<iostream>
using namespace std;
int main()
{
    int a=0,sum=0,average;
    while (a<100)
    {
        a+=2;
        sum+=a;
        cout<<a;
    }
    cout<<"\n Sum = "<<sum;
    return 0;
    
}