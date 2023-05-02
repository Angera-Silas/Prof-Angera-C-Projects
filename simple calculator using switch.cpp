#include<iostream>
using namespace std;
int main()
{
    int opt;
    long a,b,sum,dif,prod,qout,mod;
    cout<<"What do you want to do?"<<endl;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division"<<endl;
    cin>>opt;
    switch(opt)
    {
    case 1:
        cout<<"Enter the first value:"<<endl;
        cin>>a;
        cout<<"Enter the second value:"<<endl;
        cin>>b;
        sum = a+b;
        cout<<"Sum is "<<sum<<endl;
        break;
    case 2:
        cout<<"Enter the first Number"<<endl;
        cin>>a;
        cout<<"Enter the second Number"<<endl;
        cin>>b;
        dif = a-b;
        cout<<"Difference is:"<<dif<<endl;
        break;
    case 3:
        cout<<"Enter the first Number"<<endl;
        cin>>a;
        cout<<"Enter the second Number"<<endl;
        cin>>b;
        prod = a*b;
        cout<<"Product is:"<<prod<<endl;
        break;
    case 4:
        cout<<"Enter the first Number"<<endl;
        cin>>a;
        cout<<"Enter the second Number"<<endl;
        cin>>b;
        qout = a/b;
        mod = a%b;
        cout<<"Quotient is:"<<qout<<" Remainder is:"<<mod<<endl;
        break;
    default:
        cout<<"INVALID CHOICE! TRY AGAIN LATER"<<endl;
        break;
    }
    return 0;
}
