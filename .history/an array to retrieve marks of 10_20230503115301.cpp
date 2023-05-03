#include<iostream>
using namespace std;
int main()
{
    int marks[5][2] = {{45,70,60},{34,56}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<marks[i][j]<<endl;
        }
    }
    return 0;
}
