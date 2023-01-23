#include <iostream>
using namespace std;
/*
Define multiple inheritance. Give example(05M).
==>
Defination :
Multiple Inheritance is the Inheritance in which more than one base class is there and one derived class is there.
For Example : A class named Student details,and a class named Marks,then we can create a derived class named Result,
              from Student and Marks as base class.Since, Here is two base class and one derived class ,Therefore
              it is a Multiple Inheritance.
*/
class Student
{
protected:
    string name, sapid, branch, year;

public:
    Student() {}
    Student(string name, string sapid, string branch, string year) : name(name), sapid(sapid), branch(branch), year(year) {}
    void setDetails(string name, string sapid, string branch, string year)
    {
        this->name = name;
        this->sapid = sapid;
        this->branch = branch;
        this->year = year;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "SAPID : " << sapid << endl;
        cout << "Branch : " << branch << endl;
        cout << "Year : " << year << endl;
    }
};
class Marks
{
protected:
    string sapid;
    float marks, Tmarks;

public:
    Marks() {}
    Marks(string sapid, float marks, float Tmarks) : sapid(sapid), marks(marks), Tmarks(Tmarks) {}
    void setDetails(string sapid, float marks, float Tmarks)
    {
        this->sapid = sapid;
        this->marks = marks;
        this->Tmarks = Tmarks;
    }
    void display()
    {
        cout << "SAPID : " << sapid << endl;
        cout << "Marks : " << marks << endl;
        cout << "Total Marks : " << Tmarks << endl;
    }
};
class Result : Student, Marks
{
protected:
    float percentage, pointer;

public:
    Result() {}
    Result(string name, string sapid, string branch, string year, float marks, float Tmarks) : Student(name, sapid, branch, year), Marks(sapid, marks, Tmarks){};
    void diaplay()
    {
        percentage = ((float)marks / Tmarks) * 100.0;
        pointer = percentage / 9.5;
        Student::display();
        cout << "Marks : " << marks << endl;
        cout << "Total Marks : " << Tmarks << endl;
        cout << "Percentage : " << percentage << endl;
        cout << "Pointer : " << pointer << endl;
    }
};
int main()
{
    Student s1("Shubham", "60004220112", "Computer Engineering", "First Year");
    s1.display();
    cout<<endl;
    Marks m1("60004220112", 17, 20);
    m1.display();
    cout<<endl;
    Result r1("Shubham", "60004220112", "Computer Engineering", "First Year", 17, 20);
    r1.diaplay();
    cout<<endl;
    return 0;
}