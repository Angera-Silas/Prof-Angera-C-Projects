#include<iostream>
using namespace std;
class A
{
    public:
        int length;
        void getl()
        {
            cout<<"Enter the length"<<endl;
            cin>>length;
        }
};
class B
{
    public:
        int width;
        void getw()
        {
            cout<<"Enter the width "<<endl;
            cin>>width;
        }
};
class C:public A,public B
{
    public:
        void area()
        {
            cout<<"Area is "<<length*width<<endl;
        }
};
class D:public A,public B
{
    public:
        void perimeter()
        {
            cout<<"Perimeter is "<<(length+width)*2<<endl;
        }
};
int main()
{
    C Obj1;
    Obj1.getl();
    Obj1.getw();
    Obj1.area();

    D Obj2;
    Obj2.length = Obj1.length;
    Obj2.width = Obj1.width;
    Obj2.perimeter();
    return 0;
}
