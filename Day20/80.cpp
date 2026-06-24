#include <iostream>
using namespace std;

int main()
{
    int r,c;
    int a[10][10];

    cout<<"Enter rows: ";
    cin>>r;

    cout<<"Enter columns: ";
    cin>>c;


    cout<<"Enter matrix:\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    }


    for(int j=0;j<c;j++)
    {
        int sum=0;

        for(int i=0;i<r;i++)
            sum=sum+a[i][j];


        cout<<"Sum of column "<<j+1<<" = "<<sum<<endl;
    }


    return 0;
}