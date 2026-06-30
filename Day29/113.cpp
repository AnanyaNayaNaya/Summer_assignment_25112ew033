#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ch;
    double a, b;

    do
    {
        cout << "\n----- Calculator -----";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Power";
        cout << "\n7. Square";
        cout << "\n8. Cube";
        cout << "\n9. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a + b;
            break;

        case 2:
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a - b;
            break;

        case 3:
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a * b;
            break;

        case 4:
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Answer = " << a / b;
            else
                cout << "Division by Zero Not Allowed";
            break;

        case 5:
            int x, y;
            cout << "Enter Two Integers: ";
            cin >> x >> y;
            cout << "Answer = " << x % y;
            break;

        case 6:
            cout << "Enter Base and Power: ";
            cin >> a >> b;
            cout << "Answer = " << pow(a, b);
            break;

        case 7:
            cout << "Enter Number: ";
            cin >> a;
            cout << "Square = " << a * a;
            break;

        case 8:
            cout << "Enter Number: ";
            cin >> a;
            cout << "Cube = " << a * a * a;
            break;

        case 9:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (ch != 9);

    return 0;
}