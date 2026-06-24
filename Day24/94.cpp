#include <iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter string: ";
    cin>>s;


    for(int i=0;i<s.length();i++)
    {
        int count=1;


        while(i<s.length()-1 && s[i]==s[i+1])
        {
            count++;
            i++;
        }


        cout<<s[i]<<count;
    }


    return 0;
}