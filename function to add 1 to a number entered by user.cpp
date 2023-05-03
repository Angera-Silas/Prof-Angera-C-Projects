#include<iostream>
using namespace std;
int Addition(int num);
int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    int s = Addition(num);
    cout<<s<<endl;
}
int Addition(int num)
{
    num++;
    return num;
}
