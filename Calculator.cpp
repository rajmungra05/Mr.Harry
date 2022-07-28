#include<iostream>
using namespace std;


void showChoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float x, y;
    int choice;
    char a='Y';
    while(a=='y'||a=='Y')
    {
        showChoices();
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"\nEnter two numbers: ";
                cin>>x>>y;
                cout<<"Sum = "<<add(x, y);
                break;
            case 2:
                cout<<"\nEnter two numbers: ";
                cin>>x>>y;
                cout<<"Difference = "<<subtract(x, y);
                break;
            case 3:
                cout<<"\nEnter two numbers: ";
                cin>>x>>y;
                cout<<"Product = "<<multiply(x, y);
                break;
            case 4:
                cout<<"\nEnter two numbers: ";
                cin>>x>>y;
                if(divide(x, y)==0)
                {
					cout<<"\nCan't Divide By Zero";
				}
				else
				{
					cout<<"Quotient = "<<divide(x, y);
            	}
				break;
            case 5:
                break;
            default:
                cout<<"Invalid input";
        }
        cout<<"\n\nDo you want to continue ?? y or n :- ";
        cin>>a;
    }
    

    return 0;
}

void showChoices()
{
    cout<<"\n\t+=+=+= MENU =+=+=+\n";
    cout<<"1: Add\n";
    cout<<"2: Subtract\n";
    cout<<"3: Multiply\n";
    cout<<"4: Divide\n";
    cout<<"5: Exit\n";
    cout<<"\nEnter your choice :";
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a *b;
}

float divide(float a, float b)
{
    return a / b;
}
