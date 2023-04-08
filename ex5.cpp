//causes unconditional transfer of a program within a program using jump statements(break,continue,go to)
#include<iostream>
using namespace std;
int main()
{
    for(int x=0;x<=10;x++)
    {
        if(x==6)
        {
            break;
        }
        cout<<x<<endl;
    }
    return 0;
}
//using break displays numbers below 6 while continue jumps 6 and displays 7 going foward
