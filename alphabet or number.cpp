#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter any Character "<<endl;
    cin>>x;
    if (x>='a'&& x<='z'||x>='A'&& x<='Z')
    {
        cout<<x<<" is an alphabet"<<endl;
    }
    else
    {
        cout<<x<<" is a number"<<endl;
    }
    return 0;
}
