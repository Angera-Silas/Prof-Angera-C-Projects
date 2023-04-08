/*program to calculate area*/
//written by silas
#include<stdio.h>
#define PI 3.14
float area;

int main(){
    float r;
    printf("Enter the radius\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("area of circle is %f\n",area);
}
