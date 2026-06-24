#include <iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter string: ";
    cin>>s;


    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                cout<<"First repeating character: "<<s[i];
                return 0;
            }
        }
    }


    cout<<"No repeating character";


    return 0;
}