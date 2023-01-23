#include<iostream>
using namespace std;
/*
WAP for class student accept name and roll, accept and display data for 3 objects(05M).
*/
class Student{
    string name;
    int rollNo ;
public:
    void setDetails(string name,int rollNo){
        this->name = name;
        this->rollNo = rollNo;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No. : "<<rollNo<<endl<<endl;
    } 
};
int main()
{
    Student s1,s2,s3;
    s1.setDetails("Ram",18);
    s2.setDetails("Sham",19);
    s3.setDetails("Rahul",20);
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}