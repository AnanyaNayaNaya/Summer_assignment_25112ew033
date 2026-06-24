#include <iostream>
using namespace std;

int main()
{
    int n,a[100];

    cout<<"Enter number of elements: ";
    cin>>n;


    cout<<"Enter elements: ";

    for(int i=0;i<n;i++)
        cin>>a[i];


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    cout<<"Descending order: ";

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";


    return 0;
}