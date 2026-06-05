#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2; i <=n/2; i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n, biggest=0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=2; i <= n; i++){
        if(n%i==0 && isPrime(i)){
            biggest=i;
        }
    }
    cout << "The largest Prime factor:  " << biggest;
    return 0;
    
}