#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float pv,i,n,f;
    float fv;
    char v;
    switch (v)
    {
    case 'F':
    cout<<"Enter the Present Value(Pv)"<<endl;
    cin>>pv;
    cout<<"Enter interest rate(i)"<<endl;
    cin>>i;
    cout<<"Enter period(time)" <<endl;
    cin>>n;
    fv = pv * (pow(((i/100)+1),n));
    cout<<"Future Value is "<<fv<<endl;
        break;
    case 'P':
    cout<<"Enter the Future Value(Fvn)"<<endl;
    cin>>f;
    cout<<"Enter interest rate(i)"<<endl;
    cin>>i;
    cout<<"Enter period(time)" <<endl;
    cin>>n;
    default:
        break;
    }
}