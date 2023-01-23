#include <iostream>
using namespace std;
/*
Define Hybrid inheritance. Give example(5M).
==>Inheritance in which Hierarical and Multiple Inheritance both occurs is called as Hybrid Inheritance.
 Ex. A class Sport and Club are derived from base class Student,so this is a Hierarical Inheritance,
     and a class Both which is derived from Sport and Club as base class,so this is a Multiple Inheritance,
     there implies in this both the inheritance is going so this is Hybrid Inheritance.
*/
class Student
{
protected:
    string name;
    int rollNo;

public:
    Student() {}
    Student(string name, int rollNo) : name(name), rollNo(rollNo) {}
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
    }
};
class Sport : protected Student
{
protected:
    string sportName;

public:
    Sport() {}
    Sport(string name, int rollNo, string sportName) : Student(name, rollNo), sportName(sportName) {}
    void display()
    {
        Student::display();
        cout << "Sport Name : " << sportName << endl;
    }
};
class Club : Student
{
protected:
    string clubName;

public:
    Club() {}
    Club(string name, int rollNo, string clubName) : Student(name, rollNo), clubName(clubName) {}
    void display()
    {
        Student::display();
        cout << "Club Name : " << clubName << endl;
    }
};
class Both : Sport, Club
{
public:
    Both() {}
    Both(string name, int rollNo, string sportName, string clubName):Sport(name,rollNo,sportName),Club(name,rollNo,clubName) {}
    void display(){
        Sport::display();
        cout << "Club Name : " << clubName << endl;
    }
};
int main()
{
    Student student("Ram",1);
    Sport sport("Sham",2,"Cricket");
    Club club("Rahul",3,"Express");
    Both both("Shubham",153,"Running","Trinity");
    student.display();
    cout<<endl;
    sport.display();
    cout<<endl;
    club.display();
    cout<<endl;
    both.display();
    cout<<endl;
    return 0;
}