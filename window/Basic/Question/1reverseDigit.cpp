#include<iostream>
using namespace std;
int main()

{
    int num,temp,revNum=0;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    while (num>0)
    {
        temp=num%10;
        revNum=10*revNum+temp;
        num=num/10;
    }
    cout<<"the reversed number is "<<revNum<<endl;
    return 0;
}