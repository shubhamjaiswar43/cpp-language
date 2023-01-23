#include <iostream>
// #include<string>
using namespace std;
//----------------------Inheritance----------------------//
// we can inherite a class to make a another class and also add more member and member function;
// the class which is use to inherite is called as ***Base Class***;
// the class which is form by inheriting a other class is called as ***Derived Class***;

//----------------------Types of Inheritance----------------------//
//
// 1.Single Inheritance;(1-base,1-derived)
// -->In this only one base class and one derived class is their;
// -->i.e, only one class is derived from only one class;
// -->== class-->class
//
// 2.Multiple Inheritance;((>1)-base,1-derived)
// -->In this several base class and one derived class is their;
// -->i.e, only one class is derived from several class;
// -->==  class-->|
// -->==          |-->class
// -->==  class-->|
//
//
// 3.Hierarchical Inheritance;(1-base,(>1)-derived)
// -->In this only one base class and several derived class is their;
// -->i.e, several class is derived from only one class;
// -->==         |-->class
// -->== class-->|
// -->==         |-->class
//
// 4.Multilevel Inheritance;
// -->In this one class is inherited in other and then derived one's is also use to inherite to create a new class;
// -->== class-->class-->class;
//
// 5.Hybrid Inheritance;
// -->It is a combination of Multiple,Hierarchical and Multilevel Inheritance;
// -->In this one class is derived from other two derived class;
// -->==         |--> class -->|
// -->== class-->|             |-->class
// -->==         |--> class -->|

//----------------------Derived Class Syntax----------------------//
//
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     /*code*/ i.e more member and member function.
// };
//
// Visibility-Mode
// 1.It is mode to transfer data to public or private;
// 2.By default it is private;
// 3.Private Visibility Mode : Public member/memberFunction become private member/memberFunction;
// 4.Public Visibility Mode : Public member/memberFunction remains public member/memberFunction;
// 5.Protected Visibility Mode : Public member/memberFunction becomes protected member/memberFunction;
// 5.private data of base class is not inherited;

//NOTE:
//Protected Memeber/MemberFunction : they are a private data but they can inherite

// Base class;
class Employee
{

public:
    string name;
    int id;
    int salary;
    void display()
    {
        cout << endl
             << "Id No." << id << endl
             << "Name : " << name << endl
             << "Salary : " << salary << endl
             << endl;
    }
    Employee() {salary = 77;}
    Employee(int tid, string tname)
    {
        id = tid;
        name = tname;
        salary = 77;
        display();
    }
};

// Creating a Derived Class using Employee class as a base class;
class Programmer : public Employee
{
    public:
        string languageKnown = "C++";
};
int main()
{
    Employee e1(1, "Rohan");
    Employee e2(2, "Rahul");
    Programmer p1,p2;
    p2.languageKnown="python";
    p1.id=3;
    p1.name = "p1";
    p1.display();
    p1.id=4;
    p1.name = "p2";
    p1.display();
    cout<<endl<<"Programmer Language Known(p1) : "<<p1.languageKnown;
    cout<<endl<<"Programmer Language Known(p2) : "<<p2.languageKnown;
    return 0;
}