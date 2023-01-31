#include<iostream>
//Given 12hr Format of hh:mm:ss?M   (?==(A/P))
//Output should be in 24 hr format
using namespace std;
string timeConversion(string s) {
    if(s[8]=='A' && s[0]=='1' && s[1]=='2'){
        s[0]='0';
        s[1]='0';
    }
    else if(s[8]=='P' && (s[0]!='1' || s[1]!='2')){
        char f1=s[0],s1=s[1];
        int f2=f1,s2=s1,num;
        num=((f2-48)*10)+s2-48+12;
        s2=(num%10)+48;
        num/=10;
        f2=(num%10)+48;
        s[0]=f2;
        s[1]=s2;
    }
    s.resize(8);
    return s;
}

string temp(string s){
    s[5]='0';
    return s;
}
int main()
{
    string s;
    cout<<"Enter The Time(In Format of 12hr) : ";
    cin>>s;
    cout<<s<<endl;
    s=timeConversion(s);
    cout<<s<<endl;
    return 0;
}