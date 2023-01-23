#include<iostream>
using namespace std;
//Uses of Construtor In Derived Class
/*
derivedClassName(args):base1(arg1s),base2(arg2s), .....{
    //code
}
*/
//ORDER OF EXECUTION OF CONSTRUTOR: VIRTUAL BASE CLASS -> BASE CLASS -> DERIVED CLASS
//if there are more than one virtual base class or base class than order will be in 
//preference of writing
/*

Case1:
class B:public X{};
// Order of execution of constructor => X-->B

Case2:
class A: public B, public C{};
// Order of execution of constructor => B-->C-->A

Case3:
class A: public B, virtual public C{};
// Order of execution of constructor => C-->B-->A

*/
class A{
    protected:
    int a1,a2;
    public:
    A(int x,int y){
        a1=x;
        a2=y;
    }
    void dispA(){
        cout<<" a1 : "<<a1<<endl;
        cout<<" a2 : "<<a2<<endl;
    }
};
class B:protected A{
    int b1,b2;
    public:
    B(int a,int b,int c,int d):A(a,b){
        b1=c;
        b2=d;
    }
    void dispB(){
        dispA();
        cout<<" b1 : "<<b1<<endl;
        cout<<" b2 : "<<b2<<endl;
    }
};
class C:protected B
{
protected:
    int c1,c2;
public:
    C(int a,int b,int c,int d,int e,int f):B(a,b,c,d){
        c1=e;
        c2=f;
    }
    void dispC(){
        dispB();
        cout<<" c1 : "<<c1<<endl;
        cout<<" c2 : "<<c2<<endl;
    }
};

int main(){
    C c(1,2,3,4,5,6);
    c.dispC();
    return 0;
}