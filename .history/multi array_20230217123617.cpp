#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float pv,i,n;
    float fv;
    char v;
    cout<<"Choose what you want to calculate from the options below\n For future value type F and enter\n for Present value type P and enter"
    cout<<"For getting intere"
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
    cin>>fv;
    cout<<"Enter discount rate(i)"<<endl;
    cin>>i;
    cout<<"Enter period(time)" <<endl;
    cin>>n;
    pv = fv/(pow(((i/100)+1),n));
    cout
    default:
        break;
    }
}