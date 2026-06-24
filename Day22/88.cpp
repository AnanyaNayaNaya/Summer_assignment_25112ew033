#include <iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter string: ";
    getline(cin,s);


    cout<<"String without spaces: ";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            cout<<s[i];
    }


    return 0;
}