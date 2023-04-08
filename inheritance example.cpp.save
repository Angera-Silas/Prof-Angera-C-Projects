#include<iostream>
using namespace std;
class A
{
    public:
        int x;
        void getx()
        {
            cout<<"Enter value of x:"<<endl;
            cin>>x;
        }
};
class B
{
    public:
        int y;
        void gety()
        {
            cout<<"Enter the value of y"<<endl;
            cin>>y;
        }
};
class C:public A,public B
{
    public:
        void sum()
        {
            cout<<"sum is "<<x+y<<endl;
        }
};
int main()
{
    C Obj1;
    Obj1.getx();
    Obj1.gety();
    Obj1.sum();
    return 0;
}
