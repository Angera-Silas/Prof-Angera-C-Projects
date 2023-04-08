//program written by silas angera
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of the tree"<<endl;//this is the height of the tree
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)>=n+1)//we can form different patterns by changing this line
                cout<<"* ";
            else
                cout<<" ";//to produce a triangle use only one space and two spaces to produce right angled
        }
        cout<<"\n";
    }
    for (int i = 1; i <= n*0.25; i++) {//calculates exactly a quarter of the height to be the stem of the tree
        for (int j = 1; j < n; j++) {
            cout << " ";
        }
        cout << "*" <<endl;
    }
    return 0;
}
