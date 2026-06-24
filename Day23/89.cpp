#include <iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter string: ";
    cin>>s;


    for(int i=0;i<s.length();i++)
    {
        int count=0;

        for(int j=0;j<s.length();j++)
        {
            if(s[i]==s[j])
                count++;
        }


        if(count==1)
        {
            cout<<"First non repeating character: "<<s[i];
            return 0;
        }
    }


    cout<<"No non repeating character";


    return 0;
}