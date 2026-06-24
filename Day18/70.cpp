#include <iostream>
using namespace std;

int main()
{
    int n, a[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}