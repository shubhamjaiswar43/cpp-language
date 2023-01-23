#include<iostream>
// ------------------------------------------------------------------
// ***********    Friend Function of a class of Oops    *************
// ------------------------------------------------------------------
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setNumber(int x,int y){
        a=x;
        b=y;
    }
    void printNumber(){
        cout<<"----------------------------------------"<<endl;
        if (b<0)
        {
        cout<<"Your Complex Number is : z = "<<a<<b<<"i"<<endl;
        }
        else{
        cout<<"Your Complex Number is : z = "<<a<<"+"<<b<<"i"<<endl;
        }
        cout<<"----------------------------------------"<<endl;
    }
    friend Complex sumComplex(Complex z1,Complex z2);   //by creating friend function it can have access to private data
                                                        //but it is not the member of the class
                                                        //it scope is not in the class
                                                        //usally take object as argument
                                                        //it can't be call by using 
                                                        //can be declared in private or public

};
Complex sumComplex(Complex z1,Complex z2){
    Complex z3;
    z3.a=z1.a+z2.a;
    z3.b=z1.b+z2.b;
    return z3;
}

int main()
{
    Complex c1,c2,c3;
    c1.setNumber(-22,15);
    c1.printNumber();
    c2.setNumber(11,-5);
    c2.printNumber();
    c3=sumComplex(c1,c2);
    c3.printNumber();


    return 0;
}