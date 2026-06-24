#include <iostream>
using namespace std;

int main()
{
    string s,result="";


    cout<<"Enter string: ";
    cin>>s;


    for(int i=0;i<s.length();i++)
    {
        int found=0;


        for(int j=0;j<result.length();j++)
        {
            if(s[i]==result[j])
            {
                found=1;
                break;
            }
        }


        if(found==0)
            result=result+s[i];
    }


    cout<<"String after removing duplicates: "<<result;


    return 0;
}