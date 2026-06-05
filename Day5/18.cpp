#include <iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact*=i;

    }
    return fact;
}


int main()
{
    //Strong number: sum of factorial of digits 
    int n, digit, sum=0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp=n;

    while(temp>0){
        digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }

    if(sum==n)
    cout << "Strong Number";
    else
    cout << "Not a strong number";

    return 0;
    
}