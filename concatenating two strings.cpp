#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first_name;
    string surname;
    string fullname;
    string a = " ";
    cout<<"Enter your first_name"<<endl;
    cin>>first_name;
    cout<<"Enter your surname"<<endl;
    cin>>surname;
    fullname = first_name + a +surname;
    cout<<"Your Name is "<<fullname<<endl;
    return 0;
}
