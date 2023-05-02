#include<iostream>
#define PI 3.142
int main()
{
    float r,area;
    std::cout<<"ENTER THE RADIUS\n";
    std::cin>>r;
    area = PI*r*r;
    std::cout<<"AREA OF CIRCLE IS " <<area;
    return 0;
}
