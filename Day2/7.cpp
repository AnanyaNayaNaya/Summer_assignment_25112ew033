#include <iostream>
using namespace std;
int main()
{
    int a, product=1;
    cout << "Enter number:  ";
    cin >> a;
    while(a>0)
    {
        product=product*(a%10);
        a=a/10;
    }
    cout << "Product of the digits:  " << product;
    return 0;
}