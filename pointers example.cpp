#include<iostream>
using namespace std;
int main()
{
    int * p,var=10;
    p = &var;
    cout<<"Address of var "<<&var<<endl;
    cout<<"Address of var "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;
    cout<<"Value of var "<<*p<<endl;
    return 0;
}
