#include<iostream>
using namespace std;
int main()
{
    int marks[8],i,sum=0,avg;
    for(i=0;i<8;i++)
    {
        if(i==8)
        {
            break;
        }
        cout<<(i+1)<<". Enter marks: "<<endl;
        cin>>marks[i];

        sum=sum+marks[i];
        avg=sum/7;
    }

    if (avg>=70)
    {
        cout<<"Congratulations, First Class Owners";
    }
    else if(avg>=60)
    {
        cout<<"Second Class Upper Division";
    }
    else if(avg>=50)
    {
        cout<<"Second Class Lower Division";
    }
    else if(avg>=40)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
