#include <iostream>
using namespace std;
int main()
    {
        int n, og, sum=0, rem;
        cout << "Enter the number: ";
        cin >> n;

        og=n;

        while(n>0){
            rem=n%10;
            sum=sum+rem*rem*rem;
            n=n/10;
        }
        if(sum==og)
        cout << "Armstrong number";
        else
        cout << "Not Armstrong Number";


        return 0;


    }