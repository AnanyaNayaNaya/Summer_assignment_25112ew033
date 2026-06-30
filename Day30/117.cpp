#include <iostream>
#include <string>
using namespace std;

int roll[100], marks[100], n = 0;
string name[100], course[100];

void addStudent()
{
    cout << "Enter Roll No: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Course: ";
    getline(cin, course[n]);

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

    for (int i = 0; i < n; i++)
    {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName     : " << name[i];
        cout << "\nCourse   : " << course[i];
        cout << "\nMarks    : " << marks[i] << endl;
    }
}

void highestMarks()
{
    if (n == 0)
    {
        cout << "No Records\n";
        return;
    }

    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > marks[max])
            max = i;
    }

    cout << "\nTop Student";
    cout << "\nRoll No : " << roll[max];
    cout << "\nName    : " << name[max];
    cout << "\nMarks   : " << marks[max] << endl;
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Student";
        cout << "\n2.Display Students";
        cout << "\n3.Highest Marks";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: highestMarks(); break;
            case 4: break;
            default: cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}