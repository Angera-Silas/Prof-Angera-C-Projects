#include<iostream>
using namespace std;
int main()
{
    cout<<"BREAK STATEMENTS"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
    }
    cout<<"CONTINUE STATEMENT"<<endl;
    for(int i=0;i<10;i++)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
