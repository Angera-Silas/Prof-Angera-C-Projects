#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    float pv,i,n;
    float fv;
    char v;
    cout<<"Choose what you want to calculate from the options below\n For future value type F and enter\n for Present value type P and enter"<<endl;
    cout<<"For getting interest rate type in I and send\n for Getting period(time)  type T and enter"<<endl;
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
    cout<<"The present value is "<<pv<<endl;
        break;
    case 'I';
    cout<<"Enter the Future Value(Fvn)"<<endl;
    cin>>fv;
    cout<<"Enter the Present Value(Pv)"<<endl;
    cin>>pv;
    cout<<"Enter period(time)" <<endl;
    cin>>n;
    float b = fv/pv;
    float c = pow(1,n);
    float d = b-c;
    float e = log(d)/n;
    log(i)=pow(10,e);
    cout<<"Interset rate is "<<log(i)<<endl;
        break;
case 'T':
cout<<"Enter the Future Value(Fvn)"<<endl;
cin>>fv;
cout<<"Enter the Present Value(Pv)"<<endl;
cin>>pv;
cout<<"Enter discount rate(i)"<<endl;
cin>>i;
float b = fv/pv;
float c = (i+1)
n = log(b)/log(c);
cout<<
    default:
        break;
    }
}