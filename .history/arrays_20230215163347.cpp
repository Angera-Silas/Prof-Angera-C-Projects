#include<iostream>
using namespace std;
int main()
{
    int marks[n],i,sum=0;
    for(i=0;i<n;i++)
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    {
        cout<<(i+1)<<". Enter marks: "<<endl;
        cin>>marks[i];
        sum=sum+marks[i];
    }
    cout<<"sum of "<<n<<" is "<<sum<<endl;
}