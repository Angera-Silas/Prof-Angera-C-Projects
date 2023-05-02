#include<iostream>
using namespace std;
int main()
{
    char opt;
    float days,hrs,mins;
    long sec;
    cout<<"To convert days into sec enter D\nto convert hours into sec enter H\n to convert minutes into sec enter M"<<endl;
    cin>>opt;
    switch(opt)
    {
    case 'M':
        cout<<"enter the number of minutes"<<endl;
        cin>>mins;
        sec=mins*60;
        cout<<sec<<"seconds"<<endl;
        break;
    case 'H':
        cout<<"enter enter number of hours"<<endl;
        cin>>hrs;
        sec=hrs*3600;
        cout<<sec<<"seconds"<<endl;
        break;
    case 'D':
        cout<<"enter the number of days"<<endl;
        cin>>days;
        sec=days*24*3600;
        cout<<sec<<"seconds"<<endl;
        break;
    default:
        cout<<"enter a valid choice"<<endl;
        break;
    }
    return 0;
}
