#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int frequency = 0,i;
    cout<<"Enter Any Name"<<endl;
    getline(cin,name);
    for(i=0;name[i];i++)
    {
        frequency++;
    }
    cout<<"The Frequency of the String Entered is "<<frequency<<endl;
    return 0;
}
