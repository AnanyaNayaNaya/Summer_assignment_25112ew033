#include <iostream>
using namespace std;
int main()
{
    int a, r=0;
    cout << "Enter a number:  ";
    cin >> a;
    while(a>0)
    {
        int digit=a%10;
        r=r*10+digit;
        a=a/10;

    }
    cout << "The reversed number:  " << r;
    return 0;
    
}