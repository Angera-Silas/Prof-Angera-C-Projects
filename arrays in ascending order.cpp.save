#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the size of array"<<endl;
    cin>>y;
    int arr[y],holder;
    for(int i=0;i<y;i++)
    {
        cout<<"Enter value "<<(i+1)<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<(y-1);i++)
    {
        for(int j=0;j<(y-i-1);j++)
        {
            holder=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=holder;
        }
    }
    cout<<"Sorted list in ascending order: "<<endl;
    for(int i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

