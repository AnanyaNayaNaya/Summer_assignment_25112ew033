#include <iostream>
using namespace std;
int main()
    {
        int start, end;
        cout << "Enter range: ";
        cin >> start >> end;

        for(int n=start; n<=end; n++){
            int og=n, rem, sum=0;
            while(og>0){
                rem=og%10;
                sum += rem*rem*rem;
                og/=10;
            }
            if(sum==n)
            cout << n << " ";

        }
        return 0;


    }