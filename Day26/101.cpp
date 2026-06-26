#include <iostream>
using namespace std;

int main() {
    int secret = 25;
    int guess;

    do {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > secret)
            cout << "Too High!\n";
        else if (guess < secret)
            cout << "Too Low!\n";
        else
            cout << "Correct!\n";

    } while (guess != secret);

    return 0;
}