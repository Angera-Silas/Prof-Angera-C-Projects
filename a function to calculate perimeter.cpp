#include<iostream>
using namespace std;
int perimeter(int length,int width);
int area(int length,int width);
int main()
{
    int length,width;
    cout<<"Enter the length and Width"<<endl;
    cin>>length>>width;
    int c = perimeter(length,width);
    int d = area(length,width);
    cout<<"Perimeter of the rectangle is "<<c<<endl;
    cout<<"Area of the rectangle is "<<d<<endl;
    return 0;
}
int perimeter(int length,int width)
{
    int per;
    per = 2 * (length+width);
    return per;
}
int area(int length,int width)
{
    int area;
    area = length * width;
    return area;
}
