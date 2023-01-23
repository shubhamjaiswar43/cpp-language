#include<iostream>
using namespace std;
int c=8282;
int main()
{
    int a,b,c;
    cout <<"Enter the value of a :\n";
    cin >>a;
    cout <<"Enter the value of b :\n";
    cin >>b;
    c=a+b;
    cout<<"the sum is c="<<c<<endl;
    cout<<"the global c="<<::c;
    return 0;
}