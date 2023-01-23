#include<iostream>
using namespace std;
int main()
{
    int sec,mint=0,hour=0;
    cout<<"Enter Seconds : ";
    cin>>sec;
    while(sec>3600){
        sec-=3600;
        hour++;
    }
    while (sec>60)
    {
        sec-=60;
        mint++;
    }
    cout<<"Hour:Mint:Sec :: "<<hour<<" hr : "<<mint<<" m : "<<sec<<" s "<<endl;
    return 0;
}