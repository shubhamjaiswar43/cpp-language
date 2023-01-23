#include<iostream>
using namespace std;
inline int product(int x,int y){//this inline function replace the return value where fuction is call;
    return x*y;                 //it excecute fast in function of 1-2 line;
}                               //it will take so much memory if long function convert into inline,and also not recommed to use in recursive function;
float moneyReceived(int investment ,int interest=4){//interest is default argument if no value is given it will use default value else the given one is used;
    return (float)(investment+(investment*((float)interest/100)));
}

int main()

{
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;

    int money=100000;
    cout<<"if you invest "<<money<<"Rs you will get(at 4%) "<<moneyReceived(money)<<"Rs after one year"<<endl;
    money=100000;
    cout<<"if you invest "<<money<<"Rs you will get(at 10%) "<<moneyReceived(money,10)<<"Rs after one year"<<endl;
    const float pi = 3.142;//this is constant number(argument) it will not change and if changes it will show a error
    cout<<"pi="<<pi<<endl;
   // pi=pi+1;//it will show error
    cout<<"pi="<<pi<<endl;

    return 0;
}