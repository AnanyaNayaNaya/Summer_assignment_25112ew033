#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    int ch;

    do
    {
        cout << "\n1.Length";
        cout << "\n2.Copy";
        cout << "\n3.Compare";
        cout << "\n4.Reverse";
        cout << "\n5.Concatenate";
        cout << "\n6.Palindrome";
        cout << "\n7.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        cin.ignore();

        switch (ch)
        {
        case 1:
            cout << "Enter String: ";
            getline(cin, s1);
            cout << "Length = " << s1.length() << endl;
            break;

        case 2:
            cout << "Enter String: ";
            getline(cin, s1);
            s2 = s1;
            cout << "Copied String = " << s2 << endl;
            break;

        case 3:
            cout << "Enter First String: ";
            getline(cin, s1);
            cout << "Enter Second String: ";
            getline(cin, s2);

            if (s1 == s2)
                cout << "Strings are Equal\n";
            else
                cout << "Strings are Different\n";
            break;

        case 4:
            cout << "Enter String: ";
            getline(cin, s1);

            reverse(s1.begin(), s1.end());

            cout << "Reverse = " << s1 << endl;
            break;

        case 5:
            cout << "Enter First String: ";
            getline(cin, s1);

            cout << "Enter Second String: ";
            getline(cin, s2);

            cout << "Concatenated String = " << s1 + s2 << endl;
            break;

        case 6:
        {
            cout << "Enter String: ";
            getline(cin, s1);

            string temp = s1;
            reverse(temp.begin(), temp.end());

            if (temp == s1)
                cout << "Palindrome\n";
            else
                cout << "Not Palindrome";

            break;
        }

        case 7:
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (ch != 7);

    return 0;
}