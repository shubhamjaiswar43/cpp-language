#include<iostream>
using namespace std;
int factorial(int x){//recursive function for factorial
    if (x==0 || x==1)
    {
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
    
}
int main()

{
    int num1,num2,fact=1;
    cout<<"Enter a Number"<<endl;
    cin>>num1;
    num2=num1;
    while(num1>0)
    {
        fact=num1*fact;
        num1--;
    }
    cout<<"The factorial of the number(using iteration) "<<num2<<" is "<<fact<<" ,i.e "<<num2<<"!="<<fact<<endl;
    cout<<"The factorial of the number(using recursion) "<<num2<<" is "<<factorial(num2)<<" ,i.e "<<num2<<"!="<<factorial(num2)<<endl;

    return 0;
}