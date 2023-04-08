#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float sum,sub,prod,div;
    char a;
    cout<<"For Addition enter A"<<endl;
    cout<<"For Subtraction enter S"<<endl;
    cout<<"For Multiplication enter M"<<endl;
    cout<<"For Division enter D"<<endl;
    cin>>a;
    switch(a)
    {
    case 'A':
        cout<<"Enter the first value"<<endl;
        cin>>x;
        cout<<"Enter the second value"<<endl;
        cin>>y;
        sum = x+y;
        cout<<"Addition of "<<x<<" and "<<y<<" is "<<sum<<endl;
        break;
    case 'S':
        cout<<"Enter the first value"<<endl;
        cin>>x;
        cout<<"Enter the second value"<<endl;
        cin>>y;
        sub = x-y;
        cout<<"Subtraction of "<<x<<" and "<<y<<" is "<<sub<<endl;
        break;
    case 'M':
        cout<<"Enter the first value"<<endl;
        cin>>x;
        cout<<"Enter the second value"<<endl;
        cin>>y;
        prod = x*y;
        cout<<"Product of "<<x<<" and "<<y<<" is "<<prod<<endl;
        break;
    case 'D':
        cout<<"Enter the Divident"<<endl;
        cin>>x;
        cout<<"Enter the Divisor"<<endl;
        cin>>y;
        div = x/y;
        cout<<"Qutient of "<<x<<" and "<<y<<" is "<<div<<endl;
        break;
    default:
        cout<<"INVALID CHOICE!"<<endl;
        break;
    }
    return 0;
}
