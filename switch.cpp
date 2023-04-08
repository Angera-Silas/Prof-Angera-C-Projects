//a program written by silas, geofery and sharifafa
//A Program Used to get the day of the week by entering a number
#include<iostream>
using namespace std;
int main()
{
    char i;
    cout<<"Enter Rainbow Colors VIBGYOR\n";
    cin>>i;
    switch(i)
    {
        // v is quoted with a single quatation mark because its a string
        case 'V':
            cout<<"violet!"<<endl;
        break;
        case 'I':
            cout<<"Indigo!"<<endl;
        break;
        case 'B':
            cout<<"Blue!"<<endl;
        break;
        case 'G':
            cout<<"Green!"<<endl;
        break;
        case 'Y':
            cout<<"Yellow!"<<endl;
        break;
        case 'O':
            cout<<"Orange!"<<endl;
        break;
        case 'R':
            cout<<"Red!"<<endl;
        break;
        default:
            cout<<"Color out of range"<<endl;
    }
    return 0;
}
