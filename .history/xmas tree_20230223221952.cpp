#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter the height of the tree"<<endl;
    cin>>height;
    for (int i = 1; i <= height; i++)
    {
        for (int  j = 1; j <= height; j++)
        {
            if ((i+j)>=height+1)
            
                cout<<". ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i <= height * 0.25; i++)
    {
        for (int  j = 1; j <= height; j++)
        {
                cout<<" ";
        }
        cout<<"endl;
    }
    return 0;
}