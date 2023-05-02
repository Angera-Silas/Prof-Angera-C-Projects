#include<iostream>
using namespace std;
int main()
{
    float day,hours,mins;
    long sec;
    char opt;
    cout<<"To convert Minutes into seconds Enter M \nTo Convert Hours into seconds Enter H \nTo Convert Days into Seconds Enter D"<<endl;
    cin>>opt;
    switch(opt)
    {
    case 'M':
        cout<<"Enter the number of Minutes"<<endl;
        cin>>mins;
        sec = mins*60;
        cout<<sec<<" Seconds"<<endl;
        break;
    case 'H':
        cout<<"Enter the number of hours"<<endl;
        cin>>hours;
        sec = hours * 3600;
        cout<<sec<<" Seconds"<<endl;
        break;
    case 'D':
        cout<<"Enter the number of Days"<<endl;
        cin>>day;
        sec = day*24*3600;
        cout<<sec<<" Seconds"<<endl;
        break;
    default:
        cout<<"Enter a valid choice"<<endl;
        break;
    }
    return 0;
}
