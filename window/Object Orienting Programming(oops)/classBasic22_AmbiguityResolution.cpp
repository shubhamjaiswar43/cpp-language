#include<iostream>
using namespace std;
//-----------AMBIGUITY RESOLUTION In Inheritance-----------
/*
If we create a class which is derived from 2 or more class,
and if the base classes have some same name of memberFunction then, 
it is confusion for complier to use which memberFunction,
this is called as ambiguity in Inheritance.
This is solve by specification in inheritance,
which is called as Ambiguity Resolution in Inheritance.
*/
//NOTE : If same name of memberFunction is used in derived class 
//       then automatically the new memberFunction is considered
class Base1{
public:
void greet(){
    cout<<"How are you?"<<endl;
}
};
class Base2{
public:
void greet(){
    cout<<"Kaise ho?"<<endl;
}
};
class Derived:public Base1,public Base2{
public:
//Ambiguity Resolution
void greet(){
    // //This is for that both function will run
    // Base1::greet();
    // Base2::greet();

    // Run any one
    Base2::greet();
}
};
int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;
    b1.greet();
    b2.greet();
    d.greet();

    return 0;
}