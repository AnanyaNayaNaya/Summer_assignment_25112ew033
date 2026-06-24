#include <iostream>
using namespace std;

int main()
{
    string s1,s2;


    cout<<"Enter first string: ";
    cin>>s1;

    cout<<"Enter second string: ";
    cin>>s2;


    string temp=s1+s1;


    if(temp.find(s2)!=string::npos)
        cout<<"Strings are rotations";

    else
        cout<<"Strings are not rotations";


    return 0;
}