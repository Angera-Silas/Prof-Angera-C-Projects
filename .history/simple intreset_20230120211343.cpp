#include<iostream>
using namespace std;
int main()
{
    int j,k,l,m,n;
    cout<<"enter math";
    cin>>j;
    cout<<"enter english";
    cin>>k;
    cout<<"enter kiswahili";
    cin>>l;
    cout<<"enter science";
    cin>>m;
    cout<<"enter social";
    cin>>n;
    int s = (j+k+l+m+n)/5;
    cout<<"avarage = "<<s;
    return 0;
}
