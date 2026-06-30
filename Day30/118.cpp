#include <iostream>
#include <string>
using namespace std;

string book[100], author[100];
bool issued[100];
int n = 0;

void addBook()
{
    cin.ignore();

    cout << "Book Name: ";
    getline(cin, book[n]);

    cout << "Author: ";
    getline(cin, author[n]);

    issued[n] = false;
    n++;
}

void displayBooks()
{
    if (n == 0)
    {
        cout << "No Books Available\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook   : " << book[i];
        cout << "\nAuthor : " << author[i];

        if (issued[i])
            cout << "\nStatus : Issued\n";
        else
            cout << "\nStatus : Available\n";
    }
}

void issueBook()
{
    string b;

    cin.ignore();
    cout << "Enter Book Name: ";
    getline(cin, b);

    for (int i = 0; i < n; i++)
    {
        if (book[i] == b)
        {
            if (!issued[i])
            {
                issued[i] = true;
                cout << "Book Issued Successfully\n";
            }
            else
            {
                cout << "Book Already Issued\n";
            }
            return;
        }
    }

    cout << "Book Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Book";
        cout << "\n2.Display Books";
        cout << "\n3.Issue Book";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: break;
            default: cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}