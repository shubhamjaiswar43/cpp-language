#include<iostream>
using namespace std;
//Polymorphism : One Name Multiple Forms/Works -->(Ex. Mobile Phones ==> calling,calculation,gaming,netbanking and so many more)
// Polymorphism in C++ can be of two types:
// 1.Compile time polymorphism    //During Compilation it is decided which form is to be used
//     Compile time polymorphism in C++ is acheived using:
//         1.1 Function overloading
//         1.2 Operator Overloading
// 2.Run time polymorphism        //During Runtime it is decided which form is to be used,not in Compilation time
//     Compile time polymorphism in C++ is acheived using:
//         2.1 Virtual functions
class Base{
    public:
        int base;
        Base(){}
        Base(int x):base(x){}
        virtual void display(){//by creating first function as virtual they pointer of base class pointing to a derived class will run display of derived class
            cout<<"1 base : "<<base<<endl;
        }
};
class Derived:public Base{
    public:
        int derived;
        Derived(){}
        Derived(int x,int y):Base(x),derived(y){}
        void display(){
            cout<<"2 base : "<<base<<endl;
            cout<<"2 derived : "<<derived<<endl;
        }
};
int main(){
    Base base(24),*basePTR=NULL;
    Derived derived(22,44),*derivedPTR=&derived;
    basePTR = &derived;
    basePTR->display();
    derivedPTR->display();

    return 0;
}