#include<iostream>
using namespace std;
class getl
{
    public:
        float l;
        getl()
        {
            cout<<"Enter value of length:"<<endl;
            cin>>l;
        }
};
class getw
{
    public:
        float w;
        getw()
        {
            cout<<"Enter the value of width"<<endl;
            cin>>w;
        }
};
class area:public getl,public getw
{
    public:
        area()
        {
            long a = l*w;
            cout<<"area is "<<a<<endl;
        }
};
int main()
{
    area Obj1;
    return 0;
}
