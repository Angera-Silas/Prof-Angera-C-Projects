#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#define PI 3.142
using namespace std;

class Shapes
{
public:
    int option;
    string choice;
    int opt,p;
    Shapes()
    {
home:
        cout<<"Select the type of your shape\n 1. Prism\n 2. Quadrilateral\n 3. Polygon \n 0. Exit"<<endl;
        cin>>opt;
        if(opt==0)
        {
            cout<<"Thank you for choosing our services \n Code provided to you by Silas Angera"<<endl;
            exit(0);
        }
        else if(opt==1)
        {
back1:
            cout<<" 1. Cube\n 2. Cuboid\n 3. Triangular prism\n 4. Cylinder\n 5. Other \n 6. Exit \n 0. back"<<endl;
            cin>>p;
            if(p==0)
            {
                goto home;
            }
            else if(p==1)
            {
                option = 1;
            }
            else if(p==2)
            {
                option =2;
            }
            else if(p==3)
            {
                option =3;
            }
            else if(p==4)
            {
                option =4;
            }
            else if(p==5)
            {
                cout<<"Specify"<<endl;
                cin>>option;
            }
            else if(p==6)
            {
                cout<<"Thank you for choosing our services \n Code provided to you by Silas Angera"<<endl;
                exit(0);
            }
            else
            {
                cout<<"Try again"<<endl;
                goto back1;
            }
        }
        else if(opt==2)
        {
back2:
            cout<<" 1. Square \n 2. Rectangle\n 3. Triangle\n 4. Circle\n 5. Other \n 6. Exit \n 0. home"<<endl;
            cin>>p;
            if(p==0)
            {
                goto home;
            }
            else if(p==1)
            {
                option = 10;
            }
            else if(p==2)
            {
                option =20;
            }
            else if(p==3)
            {
                option =30;
            }
            else if(p==4)
            {
                option =40;
            }
            else if(p==5)
            {
                cout<<"Specify  i.e sphere,trapezium,etc"<<endl;
                getline(cin,choice);
            }
            else if(p==6)
            {
                cout<<"Thank you for choosing our services \n Code provided to you by Silas Angera"<<endl;
                exit(0);
            }
            else
            {
                cout<<"Try again"<<endl;
                goto back2;
            }
        }
        else if(opt==3)
        {
            option=90;
            ofstream about;
            about.open("More info.txt");
            about<<"This application is still under development and once this part of polygons will be finished i will post an update"<<endl;
            about<<"ABOUT PROF ANGERA"<<endl;
            about<<"Prof Angera is a professinal c++ developer, he is currently enrolled at kabarak University for an IT related course"<<endl;
            about<<"MORE ABOUT THIS APPLICATION"<<endl;
            about.close();
        }
        else
        {
            cout<<"Try again"<<endl;
            goto home;
        }
    }
};
class Area:protected Shapes
{
public:
    int opt=option;
    float l,w,h,hy,r;
    long area;
    void calculator()
    {
        if(opt==1)
        {
            cout<<"Enter the length of the cube"<<endl;
            cin>>l;
            area=l*l*6;
            cout<<"Surface Area of the Cube is ["<<area<<"]"<<endl;
        }
        else if(opt==2)
        {
            cout<<"Enter the Length of the cuboid"<<endl;
            cin>>l;
            cout<<"Enter the Width of the Cuboid"<<endl;
            cin>>w;
            cout<<"Enter the Height of the Cuboid"<<endl;
            area=(2*l*w)+(2*l*h)+(2*w*h);
            cout<<"Surface Area of the Cuboid is ["<<area<<"]"<<endl;

        }
        else if(opt==3)
        {
            cout<<"Enter the base of the triangular prism"<<endl;
            cin>>l;
            cout<<"Enter the height of the triangular prism"<<endl;
            cin>>h;
            cout<<"Enter the length of the triangular prism"<<endl;
            cin>>w;
            cout<<"Enter the hypotenuse of the triangular prism"<<endl;
            cin>>hy;
            area = (l*h)+(l*w)+(h*w)+(hy*w);
            cout<<"Surface Area of the Triangular prism is ["<<area<<"]"<<endl;
        }
        else if(opt==4)
        {
            cout<<"Enter the radius of the cylinder"<<endl;
            cin>>r;
            cout<<"Enter the height of the Cylinder"<<endl;
            cin>>h;
            area = (PI*r*r)+(PI*2*r*h);
            cout<<"Surface Area of the Cylinder is ["<<area<<"]"<<endl;
        }
        else if(opt==10)
        {
            cout<<"Enter the length of the square"<<endl;
            cin>>l;
            area=l*l;
            cout<<"Area of the Square is ["<<area<<"]"<<endl;
        }
        else if(opt==20)
        {
            cout<<"Enter the Length of the cuboid"<<endl;
            cin>>l;
            cout<<"Enter the Width of the rectangle"<<endl;
            cin>>w;
            area=l*w;
            cout<<"Area of the Rectangle is ["<<area<<"]"<<endl;
        }
        else if(opt==30)
        {
            cout<<"Enter the base of the triangle"<<endl;
            cin>>l;
            cout<<"Enter the height of the triangle"<<endl;
            cin>>h;
            area=0.5*h*l;
            cout<<"Area of the Triangle is ["<<area<<"]"<<endl;
        }
        else if(opt==40)
        {
            cout<<"Enter the radius of the circle"<<endl;
            cin>>r;
            area=PI*r*r;
            cout<<"Area of the Circle is ["<<area<<"]"<<endl;
        }
        else if(option==90)
        {
            ifstream about;
            char str[10000];
            about.open("More info.txt");
            cout<<"NOTICE"<<endl;
            while(!about.eof())
            {
                about.getline(str,10000);
                cout<<str<<endl;
            }
            about.close();
        }
    }
};
class Volume:public Area
{
private:
    long volume;
    long ltrs;
public:
    void calculator()//this is known as function overriding...the function calculator has also been used in the parent class Area
    {
        if(opt==1)
        {
            volume=l*l*l;
            cout<<"Volume of the Cube is ["<<volume<<"]"<<endl;
        }
        else if(opt==2)
        {
            volume = l*h*w;
            cout<<"Volume of the Cuboid is ["<<volume<<"]"<<endl;

        }
        else if(opt==3)
        {
            volume = 0.5*l*h*w;
            cout<<"Volume of the Triangular prism is ["<<volume<<"]"<<endl;
        }
        else if(opt==4)
        {
            volume = PI*r*r*h;
            cout<<"Volume of the Cylinder is ["<<volume<<"]"<<endl;
        }
    }
    long calculator(long volume)
    {
        ltrs=volume*1000;
        cout<<"The Shape Can Carry "<<ltrs<<" Of Liquid"<<endl;
    }
};

int main()
{
    Volume calc;
    calc.Area::calculator();
    calc.Volume::calculator();
    return 0;
}
