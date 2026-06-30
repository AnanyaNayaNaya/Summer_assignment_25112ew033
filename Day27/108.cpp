#include <iostream>
#include <string>
using namespace std;

int roll[100], n = 0;
string name[100];
float total[100], percentage[100];
char grade[100];

void addStudent()
{
    float m1, m2, m3, m4, m5;

    cout << "Enter Roll No: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total[n] = m1 + m2 + m3 + m4 + m5;
    percentage[n] = total[n] / 5;

    if (percentage[n] >= 90)
        grade[n] = 'A';
    else if (percentage[n] >= 75)
        grade[n] = 'B';
    else if (percentage[n] >= 60)
        grade[n] = 'C';
    else if (percentage[n] >= 40)
        grade[n] = 'D';
    else
        grade[n] = 'F';

    n++;
}

void display()
{
    if (n == 0)
    {
        cout << "No Records\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nRoll: " << roll[i];
        cout << "\nName: " << name[i];
        cout << "\nTotal: " << total[i];
        cout << "\nPercentage: " << percentage[i];
        cout << "\nGrade: " << grade[i] << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Marksheet";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1: addStudent(); break;
            case 2: display(); break;
            case 3: break;
            default: cout << "Invalid Choice";
        }

    } while(ch != 3);

    return 0;
}