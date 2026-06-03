#include <iostream>
using namespace std;
int main()
{
int start, end, i, j, prime;
cout << "Enter a range:  ";
cin >> start >> end;

for(i=start; i<=end; i++){
    if(i<=1) continue;
    prime=1;
    for(j=2; j<i; j++){
        if(i%j==0){
            prime=0;
            break;
        }
    }
    if(prime)
    cout << i << " ";
}
    return 0;
    
}