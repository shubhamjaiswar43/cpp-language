#include<iostream>
#include<cmath>
using namespace std;
/*
Given a Number print the reverse number
if reverse number is not in the range[-2^(31),(2^(32)-1)]
then print 0
*/
int reverse(int x) {
        long temp=x,y=0;
        x=0;
        while(temp!=0){
            y=(y*10)+(temp%10);
            temp/=10;
        }
        if(y>=pow(2,32) || y<(-pow(2,31))){
            return x;
        }
        x=y;
        return x;
    }
int main()
{
    int x;
    cout<<"Enter a digit : ";
    cin>>x;
    cout<<"The reverse of "<<x<<" is : "<<reverse(x);
    return 0;
}