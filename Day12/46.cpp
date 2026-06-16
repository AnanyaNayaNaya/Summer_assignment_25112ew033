#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, sum = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    return temp == sum;
}

int main()
{
    int num;
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}