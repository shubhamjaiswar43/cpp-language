#include<iostream>
using namespace std;
int reverseDigit(int &x){
    int rd=0;
    while(x>0){
        rd=(rd*10)+(x%10);
        x/=10;
    }
    return rd;
}
int main(){
    int todayDate,birthDate,y=0,m=0,d=0,age,count=0;
    cout<<"Enter Todays date(ddmmyyyy) : ";
    cin>>todayDate;
    cout<<"Enter Your Birthday : ";
    cin>>birthDate;
    age = todayDate-birthDate;
    cout<<"age : "<<age<<endl;
    while(age>0){
        if(count<4)
            y=((y*10)+(age%10));
        else if(count<6)
            m=((m*10)+(age%10));
        else
            d=((d*10)+(age%10));
        count++;
        age/=10;
    }
    y=reverseDigit(y);
    m=reverseDigit(m);
    d=reverseDigit(d) + 1;
    cout<<y<<"yrs "<<m<<"months "<<d<<"days"<<endl;
    return 0;
}