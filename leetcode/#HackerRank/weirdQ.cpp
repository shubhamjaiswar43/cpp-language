#include<iostream>
using namespace std;
/*Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of 2 to 5, print Not Weird
If  is even and in the inclusive range of 6 to 20, print Weird
If  is even and greater than 20, print Not Weird*/
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if (n%2) {
        cout<<"Weird"<<endl;
        return 0;
    }
    else if (n>=2 && n<=5) {
        cout<<"Not Weird"<<endl;
        return 0;
    }
    else if (n>=6 && n<=20) {
        cout<<"Weird"<<endl;
        return 0;
    }
    else{
        cout<<"Not Weird"<<endl;
        return 0;
    }
    return 0;
}