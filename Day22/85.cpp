#include <iostream>
using namespace std;

int main()
{
    string s;
    int flag=1;


    cout<<"Enter string: ";
    cin>>s;


    int start=0;
    int end=s.length()-1;


    while(start<end)
    {
        if(s[start]!=s[end])
        {
            flag=0;
            break;
        }

        start++;
        end--;
    }


    if(flag)
        cout<<"Palindrome";

    else
        cout<<"Not Palindrome";


    return 0;
}