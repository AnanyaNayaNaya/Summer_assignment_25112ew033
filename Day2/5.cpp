#include <iostream>
using namespace std;
int main()
{
    int a, sum=0;
    cout << "Enter a number:  ";
    cin >> a;
    while(a>0)
    {
        sum=sum+a%10;
        a=a/10;
    }
    cout << "Sum of the digits:  " << sum << endl;
    return 0;
}