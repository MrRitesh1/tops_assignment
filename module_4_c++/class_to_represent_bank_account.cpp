#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class bank
{
public:
    char name[100];
    char AcType[7];
    long long int Acno;
    float balance;

    // member functions of the class Bank
    //  initialize function to initialize data members
    void initialize()
    {
        cout << "\n________________*** Enter Detail ***________________";
        // cout<<"\n-------------------------------------";
        cout << "\nEnter Account Holders Name : ";
        gets(name); //(cin,name,'\n');
        cout << "\nAccount Type : ";
        gets(AcType); //(cin,AcType,'\n');   //cin>>AcType;
        cout << "\nEnter Account No : ";
        cin >> Acno;
        cout << "\nAccount Balance to deposit : ";
        cin >> balance;
    }
    // deposit() function to deposit amount in account
    void deposit()
    {
        int depositAmount;
        cout << "\nEnter the amount to diposit = ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
        cout << "\n----------------------------------------------------------";
    }
    // withdraw() function to withdraw amount and check remaining balance

    void withdraw()
    {
        int withdraw;
        cout << "Your New Balance : " << balance;
        cout << "\nEnter amount to withdraw :  ";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            balance -= withdraw;
            cout << "\nRemaining Balance :" << balance;
        }
        else if (withdraw > balance)
        {
            cout << "Sorry you can not withdraw mony,you want withdraw mony please enter less amount than balance : " << balance;
        }
        else
        {
            exit(0);
        }
    }
    // display function to display user information
    void display()
    {
        cout << "\n----------------------------------------------------------";
        cout << "\nName : \t\t\t" << name;
        cout << "\nAccount No. : \t\t" << Acno;
        cout << "\nAccount Type : \t\t" << AcType;
        cout << "\nAccount Balance : \t" << balance;
        cout << "\n----------------------------------------------------------";
    }
};
int main()
{
    int i;
    char choice;
    bank bk;
    bk.initialize();
moreinfo:
    cout << "\n----------------------------------------------------------";
    cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\n";
    cout << "\n----------------------------------------------------------\n";
    cout << "Enter your choice : ";
    cin >> i;
    if (i == 1)
    {
        bk.display();
    }
    else if (i == 2)
    {
        bk.deposit();
    }
    else if (i == 3)
    {
        bk.withdraw();
    }
    cout << "\n----------------------------------------------------------\n";
    cout << "\nDo you want to more operation ?\n press y for yes \n press n for no : \n";
    cin >> choice;
    if (choice == 'y')
    {
        goto moreinfo;
    }
    else if (choice == 'n')
        goto information;

information:
    cout << "\n-------------------- **Thank** ------------------------";

    return 0;
}