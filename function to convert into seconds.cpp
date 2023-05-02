#include<iostream>
using namespace std;
float timeConverter(char options)
{
    float time,hours,mins,secs;
    switch (options)
    {
    case 'D':
        cout<<"Enter the number of Days"<<endl;
        cin>>time;
        hours = time * 24;
        mins = hours * 60;
        secs = mins * 60;
        break;
    case 'H':
        cout<<"Enter number of hours"<<endl;
        cin>>time;
        mins = time * 60;
        secs = mins * 60;
        break;
    case 'M':
        cout<<"Enter number of minutes"<<endl;
        cin>>time;
        secs = time * 60;
    }
    return secs;
}
int main()
{
    char options;
    cout<<"To convert Days into seconds press D"<<endl;
    cout<<"To convert Hours into seconds press H"<<endl;
    cout<<"To convert Minutes into seconds press M"<<endl;
    cin>>options;
    float result = timeConverter(options);
    cout<<result<<" seconds";

    return 0;
}
