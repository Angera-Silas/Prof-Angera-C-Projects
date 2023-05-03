#include<iostream>
using namespace std;
int main()
{
    int marks[5][2] = {{70,60,23,67,89},{}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<marks[i][j]<<endl;
        }
    }
    return 0;
}
