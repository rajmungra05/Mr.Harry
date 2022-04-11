#include<iostream>
using namespace std;
class stud
{
        int rno;
        char nm[20];
        public:
        void getdata()
    {
        cout<<"enter rno:";
        cin>>rno;
        cout<<"enter ur name";
        cin>>nm;
    }
        void putdata()
        {
            cout<<"\n\n Rno:\t"<<rno;
            cout<<"\n name:\t"<<nm;
        }
};
    int main()
    {
        stud s1,s2,s3;
        s1.getdata();
        s2.getdata();
        s3.getdata();
        s1.putdata();
        s2.putdata();
        s3.putdata();
    return 0;
    }