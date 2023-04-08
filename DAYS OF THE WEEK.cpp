//a program written by silas, geofery and sharifafa
//A Program Used to get the day of the week by entering a number
#include<iostream>
using namespace std;
int main()
{
    int d;
    cout<<"Enter Days of the week: ";
    cin>>d;
    switch(d)
    {
    case 1:
        cout<<"Sunday!"<<endl;
        break;
    case 2:
        cout<<"Monday!"<<endl;
        break;
    case 3:
        cout<<"Tuesday!"<<endl;
        break;
    case 4:
        cout<<"Wednesday!"<<"\n The day Everybody in Kabarak University gets to chapel"<<endl;
        break;
    case 5:
        cout<<"Thursday!"<<endl;
        break;
    case 6:
        cout<<"Friday!"<<endl;
        break;
    case 7:
        cout<<"Saturday!"<<endl;
        break;
    default:
        cout<<"Number out of range!"<<endl;
    }
    return 0;
}
