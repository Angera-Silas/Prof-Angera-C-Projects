#include <iostream>
#define PI 3.142
using namespace std;
class Circle
{
private:
    float radius;
    float area;
public:
    void getradius()
    {
        cout<<"Enter the Radius of The circle"<<endl;
        cin>>radius;
    }
    void findArea()
    {
        area = PI * radius * radius;
        cout<<"Area of The circle is "<<area<<endl;
    }
};
int main()
{
    Circle Obj1;
    Obj1.getradius();
    Obj1.findArea();
    return 0;
}
