#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Before swap \na="<<a<< " b="<<b;
    c=a;
    a=b;
    b=c;
    printf("\nAfter swap\na=%d b=%d" ,a,b);
    return 0;
}