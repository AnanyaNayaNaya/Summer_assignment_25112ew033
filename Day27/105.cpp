#include <iostream>
#include <string>
using namespace std;

int roll[100], marks[100], n = 0;
string name[100];

void addStudent()
{
    cout << "Enter Roll No: ";
    cin >> roll[n];
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name[n]);
    cout << "Enter Marks: ";
    cin >> marks[n];
    n++;
}

void displayStudents()
{
    if (n == 0)
    {
        cout << "No Records Found\n";
        return;
    }

    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Roll: " << roll[i]
             << " Name: " << name[i]
             << " Marks: " << marks[i] << endl;
    }
}

void searchStudent()
{
    int r;
    cout << "Enter Roll No: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "Found\n";
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Record Not Found\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n1.Add Student";
        cout << "\n2.Display Students";
        cout << "\n3.Search Student";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}