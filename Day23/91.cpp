#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;


    cout<<"Enter first string: ";
    cin>>s1;

    cout<<"Enter second string: ";
    cin>>s2;


    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


    if(s1==s2)
        cout<<"Strings are Anagram";

    else
        cout<<"Strings are Not Anagram";


    return 0;
}