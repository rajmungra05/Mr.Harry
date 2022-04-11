#include<iostream>
using namespace std;
class emp
{
   int no;
   char name[20];
   public:
   void getdata()
   {
      cout<<"enter no";
      cin>>no;
      cout<<"enter name";
      cin>>name;
   }
    void putdata()
   {
         cout<<"\n\n no is:\t"<<no;
         cout<<"\n name is:\t"<<name;
   }
};
      
         int main()
      {
         emp E1,E2,E3;
         E1.getdata();
         E2.getdata();
         E3.getdata();
         E1.putdata();
         E2.putdata();
         E3.putdata();
         return 0;
      }