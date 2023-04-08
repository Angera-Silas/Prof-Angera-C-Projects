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
    int opt,m;
    void future_value()
    {
        cout<<"CHOOSE HOW YOUR INVESTMENT IS COMPOUNDED\n 1. ANNUALLY\n 2. SEMI-ANNUALLY\n 3. QUATERLY\n 4. MONTHLY\n 5. WEEKLY\n 6. DAILY"<<endl;
        cin>>opt;
        switch (opt)
        {
        case 1:
            m = 1;
            fv = pv * (pow((1+(i/m)),m*n));
            break;
        case 2:
            m = 2;
            fv = pv * (pow((1+(i/m)),m*n));
        default:
        cout<<"INVALID CHOICE!"<<endl;
            break;
        }
    }
};
int main()
{
    future_value Obj1;
    Obj1.present_value();
    Obj1.interest_rate();
    Obj1.period();
    Obj1.future_value();
    return 0;
}