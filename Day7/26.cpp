#include <iostream>
using namespace std;

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: fib(0)=0, fib(1)=1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter position: ";
    cin >> n;

    cout << "Fibonacci number at position " << n
         << " is " << fibonacci(n) << endl;

    return 0;
}