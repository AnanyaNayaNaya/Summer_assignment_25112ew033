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
        cout << "No Employee Records\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee ID : " << id[i];
        cout << "\nName        : " << name[i];
        cout << "\nDepartment  : " << department[i];
        cout << "\nSalary      : " << salary[i] << endl;
    }
}

void incrementSalary()
{
    int empId;

    cout << "Enter Employee ID: ";
    cin >> empId;

    for (int i = 0; i < n; i++)
    {
        if (id[i] == empId)
        {
            salary[i] += 2000;
            cout << "Salary Increased Successfully\n";
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
        cout << "\n1.Add Employee";
        cout << "\n2.Display Employees";
        cout << "\n3.Increment Salary";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: incrementSalary(); break;
            case 4: break;
            default: cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}