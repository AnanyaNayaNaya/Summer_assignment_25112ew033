#include <iostream>
using namespace std;

int main()
{
    string s;
    char ch;
    int count=0;

    cout<<"Enter string: ";
    cin>>s;

    cout<<"Enter character to find frequency: ";
    cin>>ch;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
            count++;
    }

    cout<<"Frequency = "<<count;

    return 0;
}