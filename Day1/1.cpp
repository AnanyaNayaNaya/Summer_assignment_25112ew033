#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a natural number:  ";
    cin >> n;
    int s = n*(n+1)/2;

    cout << "Sum of first " << n << "natural numbers is:  " << s << endl;

    return 0;
}