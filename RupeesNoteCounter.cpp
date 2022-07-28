#include<iostream>
using namespace std;

int main()
{
    int amount;
    int note2000,note500, note100, note50, note20, note10, note5, note2, note1,total;
    
   	note2000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
	
	cout<<"\n\tEnter number of notes :- \n";
    cout<<"\n\t2000 = ";
    cin>>note2000;
    cout<<"\t500 = ";
    cin>>note500;
    cout<<"\t100 = ";
    cin>>note100;
    cout<<"\t50 = ";
    cin>>note50;
    cout<<"\t20 = ";
    cin>>note20;
    cout<<"\t10 = ";
    cin>>note10;
    cout<<"\t5 = ";
    cin>>note5;
    cout<<"\t2 = ";
    cin>>note2;
    cout<<"\t1 = ";
    cin>>note1;
    
    total = (note2000*2000)+ (note500*500)+ (note100*100)+(note50*50)+(note20*20)+(note10*10)+(note5*5)+(note2*2)+(note1*1);
    
    cout<<"\n\tTotal amount is = "<<total;

	system("pause>nul");
    return 0;
}
