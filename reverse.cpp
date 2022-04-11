#include<iostream>
using namespace std;
int main()
{
    int no,d,rev=0;
    cout<<"enter no";
    cin>>no;
    while (no>0)
    {
            d=no%10;
            no=no/10;
            rev=(rev*10)+d;
    }
        cout<<"\n reverse no is :"<<rev;
    return 0;
}