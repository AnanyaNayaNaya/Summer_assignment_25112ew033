#include <iostream>
#include <string>
using namespace std;

int id[100], salary[100], n = 0;
string name[100], department[100];

void addEmployee()
{
    cout << "Employee ID: ";
    cin >> id[n];
    cin.ignore();

    cout << "Employee Name: ";
    getline(cin, name[n]);

    cout << "Department: ";
    getline(cin, department[n]);

    cout << "Salary: ";
    cin >> salary[n];

    n++;
}

void displayEmployees()
{
    if (n == 0)
    {
        cout << "No Employees\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nID: " << id[i];
        cout << "\nName: " << name[i];
        cout << "\nDepartment: " << department[i];
        cout << "\nSalary: " << salary[i] << endl;
    }
}

void searchEmployee()
{
    int x;

    cout << "Enter Employee ID: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (id[i] == x)
        {
            cout << "Name: " << name[i] << endl;
            cout << "Department: " << department[i] << endl;
            cout << "Salary: " << salary[i] << endl;
            return;
        }
    }

    cout << "Employee Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add";
        cout << "\n2.Display";
        cout << "\n3.Search";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployees();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}