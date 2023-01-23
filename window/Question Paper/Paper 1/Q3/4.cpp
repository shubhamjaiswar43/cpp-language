#include<iostream>
using namespace std;
/*
WAP to declare a class 'birthday' having data member as day, month and year.
Accept and display data for 5 objects use pointer to object(10M).
*/
int set(int value,int digit){
    int count=0,temp=value;
    while(temp>0){
        count++;
        temp/=10;
    }
    for (int i = count; i < digit; i++)
    {
        cout<<"0";
    }
    return value;
}
class Birthday{
    int day,month,year;
public:
    void setDOB(int day,int month,int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void display(){
        cout<<"Birthday : "<<set(day,2)<<"/"<<set(month,2)<<"/"<<set(year,4)<<endl;
    }
};
int main()
{
    Birthday b[5],*ptr;
    for (int i = 0; i < 5; i++)
    {
        int d,m,y;
        ptr=&b[i];
        cout<<"Enter Birthday(in format dd mm yyyy) : ";
        cin>>d>>m>>y;
        ptr->setDOB(d,m,y);
        ptr->display();
        cout<<endl;
    }
    ptr=NULL;

    return 0;
}