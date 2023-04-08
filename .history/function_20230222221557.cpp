#include<iostream>
using namespace std;
int area(int length,int width);
int main()
{
    int length,width;
    cout<<"enter the value of length,width"<<endl;
    cin>>length>>width;
    int c = area(length,width);
    cout<<"area of the rectangle is "<<c<<endl;
    return 0;
}
int area (int length,int width)
{3
    int area;
    area=length*width;
    return area;
}