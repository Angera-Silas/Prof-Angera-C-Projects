#include<iostream>
using namespace std;
int main()
{
    int a,b,j,k,sum=0,coun=0;
    cout<<"Enter the lower limit"<<endl;
    cin>>a;
    cout<<"Enter the Upper limit:"<<endl;
    cin>>b;
    j=a;
    k=j;
    a=a+2;
    cout<<"---------------Even Numbers---------------"<<endl;
    for(int i=a;i<b;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"\t";
            sum+=i;
            coun++;
        }
    }
    cout<<endl<<"Total number of Even Numbers Between "<<j<<" and "<<b<<" : "<<coun<<endl;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<sum/coun<<endl;

    cout<<"\n\n---------------Odd Numbers---------------"<<endl;
    for(j;j<b;j++)
    {
        if(j%2!=0)
        {
            cout<<j<<"\t";
            sum+=j;
            coun++;
        }
    }
    cout<<endl<<"Total number of Odd Numbers Between "<<k<<" and "<<b<<" : "<<coun<<endl;
    cout<<"\nSum : "<<sum<<endl;
    cout<<"Average : "<<sum/coun<<endl;
    return 0;
}
