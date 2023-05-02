#include <iostream>
#include <cmath>
#include <stdlib.h>
#define PI 3.142
using namespace std;
class Volume
{
private:
    int s;
    float radius, side, length, width, base,height;
    long volume,ltrs;

public:
    long getvol()
    {
        again:
        cout << " 1. Cylinder \n 2. Cube \n 3. Cuboid \n 4. Triangular Prism \n 5. exit" << endl;
        cin >> s;
        cout<<"Enter your Measurements in Centimeters"<<endl;
        switch (s)
        {
        case 1:
            cout << "Enter the radius of the cross section surface" << endl;
            cin >> radius;
            cout << "Enter the height of the cylinder" << endl;
            cin >> height;
            volume = PI*radius*radius*height;
            cout<<"Volume of the Cylinder is :"<<"["<<volume<<"]"<<endl;
            break;
        case 2:
            cout << "Enter the sides measurements of the cube" << endl;
            cin >> side;
            volume = pow(side,3);
            cout<<"Volume of the Cube is :"<<"["<<volume<<"]"<<endl;
            break;
        case 3:
            cout << "Enter the length of the cross section surface of the cuboid" << endl;
            cin >> length;
            cout << "Enter the width of the cross sectional area of the cuboid" << endl;
            cin >> width;
            cout << "Enter the height of the cuboid" << endl;
            cin >> height;
            volume = length*width*height;
            cout<<"Volume of the Cuboid is :"<<"["<<volume<<"]"<<endl;
            break;
        case 4:
            cout << "Enter the base of the triangle" << endl;
            cin >> base;
            cout << "Enter the height of the triangle" << endl;
            cin >> height;
            cout << "Enter the length of the prism" << endl;
            cin >> length;
            volume = 0.5*base*height*length;
            cout<<"Volume of the Triangular Prism is :"<<"["<<volume<<"]"<<endl;
            break;
        case 5:
            cout << "Thank you for Using our app" << endl;
            cout << "Code provided to you by Prof Angera silas" << endl;
            exit(0);
            break;

        default:
            cout << "Invalid choice!...........Try again" << endl;
            goto again;
            break;
        }
        return volume;
    }
    void convert()
    {
        ltrs = volume/1000;
        cout<<"The shape carries approximately ["<<ltrs<<" litres]"<<endl;
    }
};

int main()
{
    Volume Obj1;
    Obj1.getvol();
    Obj1.convert();
    return 0;
}
