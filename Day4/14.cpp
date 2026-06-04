#include <iostream>
using namespace std;
int main()
    {
        int n, a=0, b=1, next;
        cout << "Enter n: ";
        cin >> n;
         if(n==1)
         cout << "Answer: 0";
         else if(n==2)
         cout << "Answer: 1";
         else{
            for(int i=3; i<=n; i++){
                next=a+b;
                a=b;
                b=next;
            }
            cout << "Answer: " << b;
         }
        return 0;


    }