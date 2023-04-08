/*Program written by Prof Angera*/
#include <iostream>
#include <cmath>
using namespace std;
class present_value
{
public:
    double pv;
    //contructor of the class should have the same name as of the class
    //has no datatype
    present_value()
    {
        cout << "ENTER THE AMOUNT OF MONEY DEPOSITED" << endl;
        cin >> pv;
    }
};
class interest_rate
{
public:
    double i;
    interest_rate()
    {
        cout << "WHAT IS THE INTEREST RATE" << endl;
        cin >> i;
    }
};
class period
{
public:
    double n;
    period()
    {
        cout << "ENTER NUMBER OF YEARS INVESTED" << endl;
        cin >> n;
    }
};
class future_value : public present_value, public interest_rate, public period
{
public:
    double fv,m;
    int opt;
    future_value()
    {
        cout << "CHOOSE HOW YOUR INVESTMENT IS COMPOUNDED\n 1. ANNUALLY\n 2. SEMI-ANNUALLY\n 3. QUATERLY\n 4. MONTHLY\n 5. WEEKLY\n 6. DAILY" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            m = 1;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        case 2:
            m = 2;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        case 3:
            m = 4;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        case 4:
            m = 12;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        case 5:
            m = 52;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        case 6:
            m = 365;
            i = i / 100;
            fv = pv * (pow((1 + (i / m)), m * n));
            cout << "FUTURE VALUE = " << fv << endl;
            break;
        default:
            cout << "INVALID CHOICE!" << endl;
            break;
        }
    }
};
int main()
{
    future_value Obj1;//creating object of class
    return 0;
}
