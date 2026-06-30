#include <iostream>
#include <string>
using namespace std;

string habit[100];
bool completed[100];
int n = 0;

void addHabit()
{
    cin.ignore();

    cout << "Enter Habit Name: ";
    getline(cin, habit[n]);

    completed[n] = false;

    n++;

    cout << "Habit Added Successfully.\n";
}

void displayHabits()
{
    if (n == 0)
    {
        cout << "No Habits Added.\n";
        return;
    }

    cout << "\n------ HABIT LIST ------\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << habit[i];

        if (completed[i])
            cout << "  [Completed]";
        else
            cout << "  [Pending]";

        cout << endl;
    }
}

void markCompleted()
{
    int num;

    displayHabits();

    if (n == 0)
        return;

    cout << "\nEnter Habit Number: ";
    cin >> num;

    if (num >= 1 && num <= n)
    {
        completed[num - 1] = true;
        cout << "Habit Marked Completed.\n";
    }
    else
    {
        cout << "Invalid Habit Number.\n";
    }
}

void searchHabit()
{
    string key;

    cin.ignore();

    cout << "Enter Habit Name: ";
    getline(cin, key);

    for (int i = 0; i < n; i++)
    {
        if (habit[i] == key)
        {
            cout << "\nHabit Found.\n";

            if (completed[i])
                cout << "Status : Completed\n";
            else
                cout << "Status : Pending\n";

            return;
        }
    }

    cout << "Habit Not Found.\n";
}

void progressReport()
{
    int done = 0;

    for (int i = 0; i < n; i++)
    {
        if (completed[i])
            done++;
    }

    cout << "\n------ PROGRESS REPORT ------\n";
    cout << "Total Habits     : " << n << endl;
    cout << "Completed Habits : " << done << endl;
    cout << "Pending Habits   : " << n - done << endl;

    if (n != 0)
        cout << "Completion Rate  : " << (done * 100.0) / n << "%\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n==============================";
        cout << "\n PERSONAL HABIT TRACKER";
        cout << "\n==============================";
        cout << "\n1. Add Habit";
        cout << "\n2. View Habits";
        cout << "\n3. Mark Habit Completed";
        cout << "\n4. Search Habit";
        cout << "\n5. Progress Report";
        cout << "\n6. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addHabit();
            break;

        case 2:
            displayHabits();
            break;

        case 3:
            markCompleted();
            break;

        case 4:
            searchHabit();
            break;

        case 5:
            progressReport();
            break;

        case 6:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice.";
        }

    } while (choice != 6);

    return 0;
}