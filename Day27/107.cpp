#include <iostream>
#include <string>
using namespace std;

int n = 0;
string name[100];
float basic[100];

void addEmployee()
{
    cin.ignore();

    cout << "Employee Name: ";
    getline(cin, name[n]);

    cout << "Basic Salary: ";
    cin >> basic[n];

    n++;
}

void salaryReport()
{
    if (n == 0)
    {
        cout << "No Records\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        float hra = basic[i] * 0.20;
        float da = basic[i] * 0.10;
        float gross = basic[i] + hra + da;

        cout << "\nEmployee: " << name[i];
        cout << "\nBasic: " << basic[i];
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nGross Salary: " << gross << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Employee";
        cout << "\n2.Salary Report";
        cout << "\n3.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            salaryReport();
            break;

        case 3:
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (ch != 3);

    return 0;
}