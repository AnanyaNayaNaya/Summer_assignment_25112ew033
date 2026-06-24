#include <iostream>
using namespace std;

int main()
{
    int r,c;
    int a[10][10], b[10][10], sum[10][10];


    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;


    cout<<"Enter first matrix:\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    }


    cout<<"Enter second matrix:\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>b[i][j];
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
    }


    cout<<"Addition of matrices:\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<sum[i][j]<<" ";

        cout<<endl;
    }


    return 0;
}