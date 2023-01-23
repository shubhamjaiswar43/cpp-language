#include <iostream>
using namespace std;
//MULTIPLE INHERITANCE
/*
    // Syntax
    // for Inheriting in multiple inheritance
    class {{Derived}}: {{visibility-mode}} {{basel}}, {{visibility-mode}} {{base2}}
    {
    //{{Class body of class Derived class}}
    };


//  NOTE : 
          WE CAN ALSO INHERITE MORE CLASS IN ONE CLASS BY ADDING THIER NAME AND
          VISIBIALITY MODE PRE-FOLLOWED BY " , "(COMMA)
          
*/
class Base1
{
protected:
    int b1;

public:
    void setb1(int x) { b1 = x; }
    void disb1(void){ cout<<" b1 : "<<b1<<endl;}
};
class Base2
{
protected:
    int b2;

public:
    void setb2(int x) { b2 = x; }
    void disb2(void){ cout<<" b2 : "<<b2<<endl;}
};
class Derived : protected Base1, protected Base2
{
    protected:
    int d;
    public:
    void setd(int x,int y,int z){
    setb1(x);
    setb2(y);
    d=z;
    }
    void dis(void){ 
    disb1();
    disb2();
    cout<<" d  : "<<d<<endl;
    }
};
/*
Visiblity mode:
Members:
    b1,b2,d  ===>  protected        //protectly inherited--> protected remains protected
MemberFunctions:
    setb1(),setb2(),disb1(),disb2()  ===> protected    //protectly inherited--> public become protected
    setd(),dis()  ===> public
*/
int main()
{
    Derived d;
    d.setd(1,2,3);
    d.dis();
    return 0;
}