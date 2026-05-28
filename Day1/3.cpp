#include <iostream>
using namespace std;
int main()
    {
        int n;
        long long f=1;
        cout << "Enter a number:  ";
        cin>> n;
        if (n<0)
        {
            cout << "Factorial not defined";

        }
        else
        {
            for (int i=1; i<=n; i++)
            {
                f=f*i;
            }
            cout << "Factorial:  "<< f << endl;
        }
        return 0;

    }
