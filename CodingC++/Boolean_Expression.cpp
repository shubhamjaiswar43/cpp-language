#include<iostream>
using namespace std;
int main(){
    bool x= true;
    bool y= false;
    int p,q;
    cout<<"Enter two Numbers"<<endl;
    cin>>p,q;
    cin>>q;
    cout<<"The value of ("<<p<<" && "<<q<<") = "<<(p&&q)<<endl;
    cout<<"The value of ("<<p<<" || "<<q<<") = "<<(p||q)<<endl;
    cout<<"The value of !("<<p<<" && "<<q<<") = "<<!(p&&q)<<endl;
    cout<<"The value of !("<<p<<" || "<<q<<") = "<<!(p||q)<<endl;
    cout<<"The value of [(!"<<p<<") && "<<q<<"] = "<<((!p)&&q)<<endl;
    cout<<"The value of [(!"<<p<<") || "<<q<<"] = "<<((!p)||q)<<endl;
    
    return 0;
    }