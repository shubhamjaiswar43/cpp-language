#include <iostream>
#include <string.h>
using namespace std;
//By default all the things in a class is private
class employee //it is custum data_type
{
private:
    int salary, familyMember;       //private member
    char address[10];               //private member

public:
    char name[10],gender[7];        //public member
    int age;                        //public member

    void setPrivateData(int s, int f, char a[]);        //Methods
    void getdata()                                      //Methods
    {
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Salary = " << salary << endl;
        cout << "Address = " << address << endl;
        cout << "FamilyMember = " << familyMember << endl;
        cout << "Age = " << age << endl;
    }
};
void employee ::setPrivateData(int s, int f, char a[])
{
    salary = s;
    familyMember = f;
    strcpy(address, a);
}
class animal{

    public: //without this it will private as default
    char type[10],name[10];
    int age;
    void getdata();
};
void animal :: getdata(){
    cout<<"Type = "<<type<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
}
int main()
{
    employee e1;                                                                        //Objects
    strcpy(e1.name, "Shubham");
    strcpy(e1.gender, "Male");
    e1.age=20;
    // e1.salary=20000; this will show error because salary is a private data type;
    e1.setPrivateData(20000, 5, "Govandi");
    cout<<endl<<endl<<"Employee data:"<<endl;
    e1.getdata();
    animal a1;                                                                          //Objects
    strcpy(a1.type , "Dog");
    strcpy(a1.name , "Tommy");
    a1.age = 2; 
    cout<<endl<<endl<<"Animal data:"<<endl;
    a1.getdata();
    
    return 0;
}