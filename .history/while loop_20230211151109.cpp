#include<iostream>
using namespace std;
int main()
{
    int a=0,sum=0,average;
    while (a<100)
    {
        a+=2;
        sum+=a;
        cout<<a<<"\t";
    }
    cout<<"\n Sum = "<<sum<<"\n" endl;
    return 0;
    
}