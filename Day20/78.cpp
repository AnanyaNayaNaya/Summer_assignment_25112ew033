#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[10][10];
    int flag=1;


    cout<<"Enter size of square matrix: ";
    cin>>n;


    cout<<"Enter matrix:\n";

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
            }
        }
    }


    if(flag)
        cout<<"Matrix is Symmetric";

    else
        cout<<"Matrix is Not Symmetric";


    return 0;
}