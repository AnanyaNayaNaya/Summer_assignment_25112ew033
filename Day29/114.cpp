#include <iostream>
using namespace std;

int arr[100], n = 0;

void inputArray()
{
    cout << "Enter Size: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void displayArray()
{
    if (n == 0)
    {
        cout << "Array is Empty\n";
        return;
    }

    cout << "Array Elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void largest()
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    cout << "Largest Element = " << max << endl;
}

void smallest()
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    cout << "Smallest Element = " << min << endl;
}

void sumAverage()
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n << endl;
}

void search()
{
    int key;

    cout << "Enter Element to Search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Found at Position " << i + 1 << endl;
            return;
        }
    }

    cout << "Element Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Input Array";
        cout << "\n2.Display";
        cout << "\n3.Largest";
        cout << "\n4.Smallest";
        cout << "\n5.Sum & Average";
        cout << "\n6.Search";
        cout << "\n7.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: inputArray(); break;
        case 2: displayArray(); break;
        case 3: largest(); break;
        case 4: smallest(); break;
        case 5: sumAverage(); break;
        case 6: search(); break;
        case 7: break;
        default: cout << "Invalid Choice";
        }

    } while (ch != 7);

    return 0;
}