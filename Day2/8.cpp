#include <iostream>
using namespace std;

int main()
{
    int a, og, r=0;
    cout << "Enter number:  ";
    cin >> a;
    og=a;
    while(a>0)
    {
        int digit= a%10;
        r=r*10+digit;
        a/=10;
    
    }
    if(og==r)
    cout << "Palindrome number";
    else
    cout << "Not Palindrome";
    return 0;
}