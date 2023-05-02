#include<iostream>
#include<stdio.h>
using namespace std;
inline long square(float x)
{
    return (x*x);
}
inline long cubes(float x)
{
    return (x*x*x);
}
inline long power4(float x)
{
    return (x*x*x*x);
}
inline long power5(float x)
{
    int a = square(x),b=cubes(x);
    return (a*b);
}
int main()
{
    float x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Number\tSquare\tCube\tPower of 4\tPower of 5"<<endl;
    cout<<x<<"\t"<<square(x)<<"\t"<<cubes(x)<<"\t"<<power4(x)<<"\t\t"<<power5(x)<<endl;
    return 0;
}
