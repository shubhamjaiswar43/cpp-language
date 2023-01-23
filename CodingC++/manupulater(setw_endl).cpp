#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=2,b=98272,c=678,d=78;
    cout<<"Without setw"<<endl;
    cout<<"The Value of a:"<<a<<endl;
    cout<<"The Value of b:"<<b<<endl;
    cout<<"The Value of c:"<<c<<endl;
    cout<<"The Value of d:"<<d<<endl<<endl;
    
    cout<<"With setw"<<endl; //setw is in iomanip header file
    cout<<"The Value of a:"<<setw(5)<<a<<endl;
    cout<<"The Value of b:"<<setw(5)<<b<<endl;
    cout<<"The Value of c:"<<setw(5)<<c<<endl;
    cout<<"The Value of d:"<<setw(5)<<d<<endl;
    
    return 0;
}