#include <iostream>
#include <string>
using namespace std;

int id[100], quantity[100], n = 0;
float price[100];
string item[100];

void addItem()
{
    cout << "Item ID: ";
    cin >> id[n];
    cin.ignore();

    cout << "Item Name: ";
    getline(cin, item[n]);

    cout << "Price: ";
    cin >> price[n];

    cout << "Quantity: ";
    cin >> quantity[n];

    n++;
}

void displayItems()
{
    if (n == 0)
    {
        cout << "No Items Available\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nID: " << id[i];
        cout << "\nName: " << item[i];
        cout << "\nPrice: " << price[i];
        cout << "\nQuantity: " << quantity[i] << endl;
    }
}

void searchItem()
{
    int x;

    cout << "Enter Item ID: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (id[i] == x)
        {
            cout << "Item: " << item[i] << endl;
            cout << "Price: " << price[i] << endl;
            cout << "Quantity: " << quantity[i] << endl;
            return;
        }
    }

    cout << "Item Not Found\n";
}

void totalValue()
{
    float total = 0;

    for (int i = 0; i < n; i++)
        total += price[i] * quantity[i];

    cout << "Total Inventory Value = " << total << endl;
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Item";
        cout << "\n2.Display Items";
        cout << "\n3.Search Item";
        cout << "\n4.Total Stock Value";
        cout << "\n5.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: addItem(); break;
        case 2: displayItems(); break;
        case 3: searchItem(); break;
        case 4: totalValue(); break;
        case 5: break;
        default: cout << "Invalid Choice";
        }

    } while (ch != 5);

    return 0;
}