#include<iostream>
using namespace std;
/*
Define Hierarchical inheritance. Give example(05M).
==>It is type of inheritance in which two class is derived from one base class
==>Ex.Student and Teacher is a class derived from the base class Human.
*/
class Human{
protected:
    string name,dob;
public:
    Human(){}
    Human(string name,string dob):name(name),dob(dob){}
    void setDetails(string name,string dob){
        this->name = name;
        this->dob = dob;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Date of Birth : "<<dob<<endl;
    }
};
class Student:Human{
    int rollNo;
public:
    Student(){}
    Student(string name,string dob,int rollNo):Human(name,dob),rollNo(rollNo){}
    void setDetails(string name,string dob,int rollNo){
        this->name = name;
        this->dob = dob;
        this->rollNo = rollNo;
    }
    void display(){
        Human::display();
        cout<<"Roll No. : "<<rollNo<<endl;
    }
};
class Teacher:Human{
    string subTeach;
public:
    Teacher(){}
    Teacher(string name,string dob,string subTeach):Human(name,dob),subTeach(subTeach){}
    void setDetails(string name,string dob,string subTeach){
        this->name = name;
        this->dob = dob;
        this->subTeach = subTeach;
    }
    void display(){
        Human::display();
        cout<<"Subject Teach : "<<subTeach<<endl;
    }
};
int main()
{
    Human h("Human","01/01/2010");
    Student s("Student","11/11/1999",11);
    Teacher t("Teacher","22/01/1970","Subject");
    h.display();
    cout<<endl;
    s.display();
    cout<<endl;
    t.display();
    cout<<endl;

    return 0;
}