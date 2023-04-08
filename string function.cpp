#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter any name"<<endl;
    getline(cin,name);
    int c = name.size();
    cout<<"The length of my name is "<<c<<" Characters"<<endl;
    return 0;
}

