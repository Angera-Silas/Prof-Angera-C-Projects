#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
	int Myarr[n];
	int i,j,temp;
	for(i=0;i<n;i++)
    {
        cout<<"Enter Value "<<(i+1)<<endl;
        cin>>Myarr[i];
    }

	cout<<"Values You Entered:\n";
	for(i=0;i<n;i++)
    {
        cout<<Myarr[i]<<" ";
    }

	for(i=0;i<n;i++)
     {
       for(j=0;j<n-i;j++)
         {
          if(Myarr[j]>Myarr[j+1])
            {
              temp=Myarr[j];
              Myarr[j]=Myarr[j+1];
              Myarr[j+1]=temp;
            }
         }
    }
    cout<<"\nValues You Entered After sorting in ascending order is given:\n";
	for(i=0;i<n;i++)
    {
        cout<<Myarr[i]<<" ";
    }
	return 0;
}
