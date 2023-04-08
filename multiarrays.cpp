#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the dimensions of the array m x n"<<endl;
    cin>>m>>n;
    int A[m][n],B[m][n],C[m][n];
    cout<<"Enter the value of matrix A"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the value of matrix B"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>B[i][j];
        }
    }

    //Adding the two matrices
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j] = A[i][j]+B[i][j];
        }
    }

    cout<<"The sum of the matrices A & B is:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
