//PROGRAM WRITTEN BY ANGERA SILAS
#include<iostream>
using namespace std;
int main()
{
    //in this program we are going to swap using the third variable method
    int a,b,c;
    cout<<"enter the value of a: ";
    cin>>a;//taking the values from the user
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"Before swapping a = "<<a<<" and b = "<<b;//Displaying the values before swapping
    c=a;//third variable c is given the value from a to hold it and later give it to b
    a=b;//replacing the value at a with the value from b
    b=c;// replacing the value of b with the value from a which was held at c
    cout<<"\nAfter swapping a = "<<a<<" and b = " <<b;//Displaying values after swapping
    return 0;
}
