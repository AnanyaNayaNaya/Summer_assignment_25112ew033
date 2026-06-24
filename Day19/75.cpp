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
        for(int j=0;j<c;j++)
            cin>>a[i][j];


    cout<<"Transpose matrix:\n";


    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }


    return 0;
}