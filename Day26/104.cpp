#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "A. Delhi\nB. Mumbai\nC. Chennai\n";
    cin >> ans;

    if (ans == 'A' || ans == 'a')
        score++;

    cout << "\nQ2. 5 + 3 = ?\n";
    cout << "A. 6\nB. 8\nC. 10\n";
    cin >> ans;

    if (ans == 'B' || ans == 'b')
        score++;

    cout << "\nQ3. C++ is a ______?\n";
    cout << "A. Programming Language\n";
    cout << "B. Browser\n";
    cout << "C. Operating System\n";
    cin >> ans;

    if (ans == 'A' || ans == 'a')
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}