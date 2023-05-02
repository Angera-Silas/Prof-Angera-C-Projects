#include <iostream>
using namespace std;
int main()
{
    //Pointer declaration
    int *p;
    //Array declaration
    int arr[]={1, 2, 3, 4, 5, 6,7,8,9,10};
    //Assignment
    p = arr;
    for(int i=0; i<=9;i++)
    {
        cout<<*p<<endl;
        //++ moves the pointer to next int position
        p++;
    }
 return 0;
}
