#include <iostream>
#include <string>
using namespace std;

string name[100], phone[100];
int n = 0;

void addContact()
{
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Phone Number: ";
    getline(cin, phone[n]);

    n++;

    cout << "Contact Saved\n";
}

void displayContacts()
{
    if (n == 0)
    {
        cout << "No Contacts\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nName : " << name[i];
        cout << "\nPhone: " << phone[i] << endl;
    }
}

void searchContact()
{
    string x;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, x);

    for (int i = 0; i < n; i++)
    {
        if (name[i] == x)
        {
            cout << "Phone Number: " << phone[i] << endl;
            return;
        }
    }

    cout << "Contact Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Contact";
        cout << "\n2.Display Contacts";
        cout << "\n3.Search Contact";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addContact();
            break;

        case 2:
            displayContacts();
            break;

        case 3:
            searchContact();
            break;

        case 4:
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}