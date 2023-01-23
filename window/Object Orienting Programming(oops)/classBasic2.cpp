#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class binary
{
    string s;

public:
    void read(void);            //methods
    void chkBinary(void);       //methods
    void complementP(void);     //methods
    void display(void);         //methods
    void toDecimal(void);       //methods
};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary::chkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Number" << endl;
            exit(0);
        }
    }
}
void binary::complementP(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i)='1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i)='0';
        }
    }
    cout<<"After Complement Your Binary Number is:"<<s<<endl;
}
void binary::display(){
    cout<<"Your binary number is:"<<s<<endl;
}
void binary::toDecimal(){
    int len=s.length();
    int bin,num=0;
    bin=stoi(s);
    for (int i = 0; i < len; i++)
    {
        num+=(pow(2,i))*(bin%10);
        bin/=10;
    }
    

    cout<<"Your binary number "<<s<<" in decimal is:"<<num<<endl;
}
int main()
{
    binary num;         //Objects

    num.read();
    
    num.chkBinary();
    
    num.display();
    
    num.toDecimal();
    
    num.complementP();
    
    num.toDecimal();

    return 0;
}