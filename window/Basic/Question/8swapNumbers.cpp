#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swapUsingPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapUsingReferenceVariable(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=5,b=6;
    int x=55;
    int &y=x; //y is reference variable of x,Now in place of x we can also use y,which will also effect on x
    cout<<"x=y="<<x<<endl;
    y++;
    cout<<"x=y="<<x<<endl;
    x++;
    cout<<"x=y="<<x<<endl<<endl;
    cout<<"Normal Method(which will not work)"<<endl;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swap(a,b); //this will not work
    cout<<"After swap a="<<a<<" b="<<b<<endl<<endl;
    
    cout<<"Using Pointer(which will work)"<<endl;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swapUsingPointer(&a,&b); //this will work
    cout<<"After swap a="<<a<<" b="<<b<<endl<<endl;

    cout<<"Using Reference Variable(which will work)"<<endl;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swapUsingReferenceVariable(a,b); //this will work
    cout<<"After swap a="<<a<<" b="<<b<<endl<<endl;


    return 0;
}