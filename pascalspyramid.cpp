#include<iostream>
using namespace std;

int main()
{
    int i,j,sp,r;

    cout<<"Enter no. of rows to print : ";
    cin>>r;

    for(i=1;i<r;i++)
    {
        for(j=1;j<r-i+1;j++)
        {
            cout<<"  ";

        }
        sp=1;
        for(j=1;j<=i;j++)
        {
            cout<<sp<<"   ";
            sp=sp*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}