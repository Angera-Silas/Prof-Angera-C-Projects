#include<iostream>
using namespace std;
class present_value
{
    public:
    float pv;
    void present_value()
    {
        cout<<"ENTER THE AMOUNT OF MONEY DEPOSITED"<<endl;
        cin>>pv;
    }
};
class interest_rate
{
    public:
    float i;
    void interest_rate()
    {
        cout<<"WHAT IS THE INTEREST RATE"<<endl;
        cin>>i;
    }
};
class period
{
    public:
    int n;
    void period()
    {
        cout<<"ENTER NUMBER OF YEARS INVESTED"<<endl;
        cin>>n;
    }
};
class future_value:public present_value,public interest_rate,public period
{
    public:
    float fv;
    char opt;
    void future_value()
    {
        cout<<"C"
    }
}