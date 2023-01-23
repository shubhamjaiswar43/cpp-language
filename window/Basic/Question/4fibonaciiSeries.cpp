#include<iostream>
using namespace std;
int fibonacciSeries(int n){
    static int a=0;
    static int b=1;
    int c;
    cout<<a<<endl;
    if(n==1){
        return 0;
    }
    else{
        c=a+b;
        a=b;
        b=c;
        fibonacciSeries(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter Number of term"<<endl;
    cin>>n;
    cout<<endl<<endl;
    int a=0,b=1,c;
    cout<<"Iteratively"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl; //0 1 1 2 3 5 8 13....
        c=a+b;
        a=b;
        b=c;
    }
    cout<<endl<<endl<<"Recursively"<<endl;
    fibonacciSeries(n);
    return 0;
}