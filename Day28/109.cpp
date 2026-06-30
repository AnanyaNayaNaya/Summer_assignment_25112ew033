#include <iostream>
#include <string>
using namespace std;

int id[100], quantity[100], n = 0;
string book[100], author[100];

void addBook()
{
    cout << "Book ID: ";
    cin >> id[n];
    cin.ignore();

    cout << "Book Name: ";
    getline(cin, book[n]);

    cout << "Author Name: ";
    getline(cin, author[n]);

    cout << "Quantity: ";
    cin >> quantity[n];

    n++;
}

void displayBooks()
{
    if(n==0)
    {
        cout<<"No Books Available\n";
        return;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"\nBook ID: "<<id[i];
        cout<<"\nBook Name: "<<book[i];
        cout<<"\nAuthor: "<<author[i];
        cout<<"\nQuantity: "<<quantity[i]<<endl;
    }
}

void issueBook()
{
    int x;
    cout<<"Enter Book ID: ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(id[i]==x)
        {
            if(quantity[i]>0)
            {
                quantity[i]--;
                cout<<"Book Issued Successfully\n";
            }
            else
                cout<<"Book Not Available\n";
            return;
        }
    }

    cout<<"Book Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Issue Book";
        cout<<"\n4.Exit";
        cout<<"\nChoice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:issueBook();break;
            case 4:break;
            default:cout<<"Invalid Choice";
        }

    }while(ch!=4);

    return 0;
}