//Program to find squares ,cubes of any given range
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,n;
    cout<<"Enter the Range of values to find their squares\nlower limit"<<endl;
    cin>>a;
    cout<<"The highest limit"<<endl;
    cin>>n;
    cout<<"NO\tSQOARES\tCUBES\tpower 4"<<endl;
    for(int i=a;i<=n;i++)
    {
        cout<<i<<"\t"<<(pow(i,2))<<"\t"<<(pow(i,3))<<"\t"<<(i*i*i*i)<<endl;
    }

}
