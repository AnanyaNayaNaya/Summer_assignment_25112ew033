#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n, rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return temp == rev;
}

int main()
{
    int num;
    cin >> num;

    if (isPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}