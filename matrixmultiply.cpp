#include<iostream>
using namespace std;

int main()
{
    int i,j,k,r,c,a[10][10],b[10][10],mul[10][10];

    cout<<endl<<"Enter no. of rows in the mtrices : ";
    cin>>r;

    cout<<endl<<"Enter no. of columns in the matrices :  ";
    cin>>c;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element in first matrix : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element in second array : ";
            cin>>b[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<endl<<"Multiplied matrix is : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"  "<<mul[i][j];

        }
        cout<<endl;
    }
    return 0;
}