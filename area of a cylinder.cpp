#include<iostream>
#define PI 3.142
int main()
{
    float r,area,cir,h;
    float c_area,volume;
    std::cout<<"ENTER RADIUS\n";
    std::cin>>r;
    std::cout<<"ENTER HEIGHT OF CYLINDER\n";
    std::cin>>h;
    cir = PI*2*r;
    area = (cir*h)+(PI*r*r*2);
    c_area = cir * h;
    volume=PI*r*r*h;
    std::cout<<"\nSURFACE AREA OF CYLINDER IS "<<area;
    std::cout<<"\nCURVED SURFACE AREA IS "<<c_area;
    std::cout<<"\nVOLUME OF CYLINDER IS "<<volume;
    return 0;
}
