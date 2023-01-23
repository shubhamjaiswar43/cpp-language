#include<iostream>
using namespace std;
/*
WAP for time class having data member's hrs, mins, sec. write constructor to accept data and display
for two objects(05M).
*/
class Time{
    int sec,mint,hr;
public:
    Time(){}
    Time(int sec,int mint,int hr):sec(sec),mint(mint),hr(hr){}
    void display(){
        cout<<hr<<" : "<<mint<<" : "<<sec<<endl;
    }
};
int main(){
    int sec,mint,hr;
    cout<<"Enter Time in format (hour minute second) : ";
    cin>>hr>>mint>>sec;
    Time t(hr,mint,sec);
    t.display();
    return 0;
}