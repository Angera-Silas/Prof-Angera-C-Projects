#include <iostream>
using namespace std;
class A
{
public:
    int arr1[2][2];
    A()
    {
        cout<<"Enter Values for Matrix/Array A"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<"Enter value "<<i<<" "<<j<<endl;
                cin>>arr1[i][j];
            }
        }
    }
};
class B
{
public:
    int arr2[2][2];
    B()
    {
        cout<<"Enter Values for Matrix/Array B"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<"Enter value "<<i<<" "<<j<<endl;
                cin>>arr2[i][j];
            }
        }
    }
};
class C:public A,public B
{
public:
    int arr3[2][2];
    C()
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
};
class D:public C
{
public:
    D()
    {
        cout<<"The sum of Matrices A & B is: "<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    /*int m,n;
    cout<<"Enter the dimensions of the array m x n"<<endl;
    cin>>m>>n;*/
    D Obj1;
    return 0;
}
