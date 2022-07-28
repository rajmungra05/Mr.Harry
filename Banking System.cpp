#include<iostream>
using namespace std;

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;

    cout<<"Banking System\n\n";
    cout<<"Number of customer records you want to enter : ";
    cin>>n;
    accept(data, n);
    do
    {

        cout<<"\nBanking System Menu :\n";
        cout<<"Press 1 to display all records.\n";
        cout<<"Press 2 to search a record.\n";
        cout<<"Press 3 to deposit amount.\n";
        cout<<"Press 4 to withdraw amount.\n";
        cout<<"Press 0 to exit\n";
        cout<<"\nEnter choice(0-4) : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                cout<<"Enter account number to search : ";
                cin>>account_no;
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    cout<<"Record not found : ";
                }
                else
                {
                    cout<<"A/c Number: "<<data[index].account_no<<"\nName: "<<data[index].name<<"\nBalance: "<<data[index].balance<<"\n";
                }
                break;
            case 3:
                cout<<"Enter account number : ";
                cin>>account_no;
                cout<<"Enter amount to deposit : ";
                cin>>amount;
                deposit(data, n, account_no, amount);
                break;
            case 4:
                cout<<"Enter account number : ";
                cin>>account_no;
                cout<<"Enter amount to withdraw : ";
                cin>>amount;
                withdraw(data, n, account_no, amount);
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        cout<<"\nEnter data for Record #"<<i + 1;

        cout<<"\nEnter account_no : ";
        cin>>list[i].account_no;
        fflush(stdin);
        cout<<"Enter name : ";
        gets(list[i].name);
        list[i].balance = 0;
    } 
}

void display(struct customer list[80], int s)
{
    int i;

    cout<<"\n\nA/c No\tName\tBalance\n";
    for (i = 0; i < s; i++)
    {
        cout<<list[i].account_no<<"\t"<<list[i].name<<"\t"<<list[i].balance<<"\n";
    } 
}

int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        cout<<"Record not found";
    } 
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        cout<<"Record not found\n";
    } 
    else if (list[i].balance < amt)
    {
        cout<<"Insufficient balance\n";
    }
    else
    {
        list[i].balance -= amt;
    }
    
}
