#include <iostream>
#include <string>
using namespace std;

int seat[100], n = 0;
string passenger[100];

void bookTicket()
{
    cout << "Enter Passenger Name: ";
    cin.ignore();
    getline(cin, passenger[n]);

    cout << "Enter Seat Number: ";
    cin >> seat[n];

    n++;
    cout << "Ticket Booked Successfully\n";
}

void displayTickets()
{
    if (n == 0)
    {
        cout << "No Bookings\n";
        return;
    }

    cout << "\nBooked Tickets\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Passenger: " << passenger[i]
             << "  Seat: " << seat[i] << endl;
    }
}

void cancelTicket()
{
    int s;
    cout << "Enter Seat Number to Cancel: ";
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (seat[i] == s)
        {
            for (int j = i; j < n - 1; j++)
            {
                seat[j] = seat[j + 1];
                passenger[j] = passenger[j + 1];
            }

            n--;
            cout << "Ticket Cancelled\n";
            return;
        }
    }

    cout << "Seat Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Book Ticket";
        cout << "\n2.Display Tickets";
        cout << "\n3.Cancel Ticket";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            bookTicket();
            break;
        case 2:
            displayTickets();
            break;
        case 3:
            cancelTicket();
            break;
        case 4:
            break;
        default:
            cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}