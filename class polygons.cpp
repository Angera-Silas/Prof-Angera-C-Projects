#include<iostream>
using namespace std;
class Polygons
{
public:
    float x;
    float y;
    void getxy()
    {
        cout<<"enter the value of x:"<<endl;
        cin>>x;
        cout<<"enter the value of y:"<<endl;
        cin>>y;
    }
};
class B:public Polygons
{
    public:
        void area()
        {
            cout<<"area is "<<x*y<<endl;
        }
};
class C:public Polygons
{
    public:
        void perimeter()
        {
            cout<<"Perimeter is "<<(x+y)*2<<endl;
        }
};
int main()
{
    B Obj1;
    Obj1.getxy();
    Obj1.area();

    C Obj2;
    Obj2.x = Obj1.x;
    Obj2.y = Obj1.y;
    Obj2.perimeter();
    return 0;
}
