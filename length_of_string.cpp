#include<iostream>
#include<string>
using namespace std;
int length(string s)
{
    int i,sum=0;
    for(i=0;s[i];++i)
    {
        sum = sum +1;
    }

    return (sum);
}
int main()
{
    string s;
    cout<<"Enter any characters"<<endl;
    getline(cin,s);
    cout<<"The string entered has "<<length(s)<<" letters"<<endl;
    return 0;
}