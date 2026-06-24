#include <iostream>
using namespace std;

int main()
{
    string s;


    cout<<"Enter lowercase string: ";
    cin>>s;


    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }


    cout<<"Uppercase string: "<<s;


    return 0;
}