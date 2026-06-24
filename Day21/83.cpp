#include <iostream>
using namespace std;

int main()
{
    string s;

    int vowels=0, consonants=0;


    cout<<"Enter string: ";
    cin>>s;


    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];


        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }

        else
        {
            consonants++;
        }
    }


    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonants = "<<consonants;


    return 0;
}