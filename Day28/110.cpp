#include <iostream>
#include <string>
using namespace std;

int accNo[100], n = 0;
string name[100];
float balance[100];

void createAccount()
{
    cout<<"Account Number: ";
    cin>>accNo[n];
    cin.ignore();

    cout<<"Account Holder Name: ";
    getline(cin,name[n]);

    cout<<"Opening Balance: ";
    cin>>balance[n];

    n++;
}

void deposit()
{
    int x;
    float amt;

    cout<<"Enter Account Number: ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(accNo[i]==x)
        {
            cout<<"Enter Amount: ";
            cin>>amt;

            balance[i]+=amt;

            cout<<"Deposit Successful\n";
            return;
        }
    }

    cout<<"Account Not Found\n";
}

void withdraw()
{
    int x;
    float amt;

    cout<<"Enter Account Number: ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(accNo[i]==x)
        {
            cout<<"Enter Amount: ";
            cin>>amt;

            if(amt<=balance[i])
            {
                balance[i]-=amt;
                cout<<"Withdrawal Successful\n";
            }
            else
            {
                cout<<"Insufficient Balance\n";
            }

            return;
        }
    }

    cout<<"Account Not Found\n";
}

void display()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nAccount No: "<<accNo[i];
        cout<<"\nName: "<<name[i];
        cout<<"\nBalance: "<<balance[i]<<endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout<<"\n1.Create Account";
        cout<<"\n2.Deposit";
        cout<<"\n3.Withdraw";
        cout<<"\n4.Display";
        cout<<"\n5.Exit";
        cout<<"\nChoice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:createAccount();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:display();break;
            case 5:break;
            default:cout<<"Invalid Choice";
        }

    }while(ch!=5);

    return 0;
}