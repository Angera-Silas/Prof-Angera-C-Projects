#include<iostream>
#include<math.h>
int main()
{
    int pv,i,n;
    float fv;
    cout<<"Enter the Present Value Pv"<<endl;
    cin>>pv;
    cout<<"Enter interest rate(i)"<<endl;
    cin>>i;
    cout<<"Enter period(time)" <<endl;
    cin>>n;
    fv = pv * (pow((i+1),n));
    cout<<"Future Value is "<<fv<<endl;

}