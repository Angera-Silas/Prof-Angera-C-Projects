#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the base number"<<endl;
    cin>>a;
    cout<<"Enter the power value"<<endl;
    cin>>b;
    int c = pow(a,b);
    cout<<"The power of "<<a<<" to "<<b<<" is "<<c<<endl;
    return 0;
}
