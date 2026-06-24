#include <iostream>
using namespace std;

int main()
{
    int n,a[100],key;

    cout<<"Enter number of elements: ";
    cin>>n;


    cout<<"Enter sorted elements: ";

    for(int i=0;i<n;i++)
        cin>>a[i];


    cout<<"Enter element to search: ";
    cin>>key;


    int low=0;
    int high=n-1;
    int found=0;


    while(low<=high)
    {
        int mid=(low+high)/2;


        if(a[mid]==key)
        {
            found=1;
            break;
        }

        else if(a[mid]<key)
            low=mid+1;

        else
            high=mid-1;
    }


    if(found)
        cout<<"Element Found";

    else
        cout<<"Element Not Found";


    return 0;
}