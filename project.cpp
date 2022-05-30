#include<conio.h>
#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
static int p=0;
class a 
{
    char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
    public:
    void install();
    void allotment();
    void empty();
    void show();
    void avail();
    void position(int);
}
bus [10];
void vline(char ch)
{
    for(int i=80;i>0;i--)
    cout<<ch;
}
void a::install()
{
    cout<<"Enter bus number:";
    cin>>bus[p].busn;
    cout<<"\n Enter Driver's name:";
    cin>>bus[p].arrival;
    cout<<"\n From:\t\t\t";
    cin>>bus[p].from;
    cout<<"\nTo: \t\t\t";
    cin>>bus[p].to;
    bus[p].empty();
    p++;

}
void a::allotment()
{
    int seaat;
    char number[5];
    top:
    cout<<"Bus number:";
    cin>>number;
    int n;
    for (n=0;n<=p;n++)
    {
        if(strcmp(bus[n].busn,number)==0)
        break;

    }
    while(n<=p)
    {
        cout<<"\n Seat number:";
        cin>>seat;
        if (seat>32)
        {
            cout<<"\n These are only 32 seats avialabe in this bus:";

        }
        else
        {
            if (strcmp(bus[n].seat[seat/4][seat%40-1],"empty")==0)
            {
                cout<<"Enter passengers name:";
                cin>>bus[n].seat[seat/4][seat%40-1];
                break;
            }
            else
            cout<<"The seat number is already reserved\n";
            
        }
    }
    
}





















