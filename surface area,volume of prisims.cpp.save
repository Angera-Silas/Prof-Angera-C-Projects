#include<iostream>
#include<cmath>
#define PI 3.142
using namespace std;
class cross_section
{
    public:
        float length,w,height,base,radius;
        void select()
        {
            int o;
            cout<<"Choose a shape to calculate from it\n 1. Cuboid\n 2. Cube\n 3. Triangular prism\n 4. Cylinder"<<endl;
            cin>>o;
            switch(o)
            {
            case 1:
                cout<<"Enter the length"<<endl;
                cin>>length;
                cout<<"Enter the width"<<endl;
                cin>>w;
                cout<<"Enter the height"<<endl;
                cin>>height;
                break;
            case 2:
                cout<<"Enter the length of the sides"<<endl;
                cin>>length;
                break;
            case 3:
                cout<<"Enter the Base of the Cross section surface"<<endl;
                cin>>base;
                cout<<"Enter the Height of the shape"<<endl;
                cin>>height;
                cout<<"Enter the Length of the shape"<<endl;
                cin>>length;
                break;
            case 4:
                cout<<"Enter the radius of the cylinder"<<endl;
                cin>>radius;
                cout<<"Enter the height of the cylinder"<<endl;
                cin>>height;
                break;
            default:
                cout<<"INVALID CHOICE!"<<endl;
                break;
            }
        }
};
class Cuboid:public cross_section
{
public:
    void area()
    {
        cout<<"Surface area of the Cuboid is "<<(2*(length*w))+(2*(length*height))+(2*(height*w))<<endl;
    }
};
class Cube:public cross_section
{
public:
    void carea()
    {
        cout<<"Area is "<<((pow(length,2))*6)<<endl;
    }
};
class triangular:public cross_section
{
public:
    void tarea()
    {
        float hy = sqrt(pow(base,2)+pow(height,2));
        cout<<"Surface area of the triangular prism is "<<((base*height)+(base*length)+(height*length)+(hy*length))<<endl;
    }
};
class cylinder:public cross_section
{
public:
    void cyarea()
    {
        cout<<"Surface area of the cylinder is "<<(PI*radius*radius)+(PI*2*radius*height)<<endl;
    }
};
int main()
{
    Cuboid Obj1;
    Obj1.select();
    Obj1.area();

    Cube Obj2;
    Obj2.length = Obj1.length;
    Obj2.carea();

    triangular Obj3;
    Obj3.base = Obj1.base;
    Obj3.height = Obj1.height;
    Obj3.tarea();

    cylinder Obj4;
    Obj4.radius = Obj1.radius;
    Obj4.height = Obj1.height;
    Obj4.cyarea();
    return 0;
}
