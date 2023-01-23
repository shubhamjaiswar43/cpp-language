#include <iostream>
using namespace std;
// MULTIPLE INHERITANCE
/*
Note :
If we are inheriting B from A and C from B: [ A--->B--->C ]
1. A is the base class for B and B is the base class for C
2. A-->B-->C is called Inheritance Path
*/
class Human
{
protected:
    string name;

public:
    Human() {}
    Human(string x) { name = x; }
    void setName(string x) { name = x; }
    void displayH(void) { cout << "Name : " << name << endl; }
    void disH(void)
    {
        cout << "Name : " << name << endl;
    }
};
class Student : public Human
{
protected:
    int rollNumber;

public:
    Student() {}
    Student(string x, int y)
    {
        name = x;
        rollNumber = y;
    }
    void setRollNumber(int x) { rollNumber = x; }
    void displayS(void) { cout << "Name : " << name << endl
                               << "Roll Number : " << rollNumber << endl; }
    void disS(void)
    {
        cout << "Roll Number : " << rollNumber << endl;
    }
};
class Exam : public Student
{
protected:
    char grade;

public:
    Exam() {}
    Exam(string x, int y, char z)
    {
        name = x;
        rollNumber = y;
        grade = z;
    }
    void setGrade(char x) { grade = x; }
    void displayE(void) { cout << "Name : " << name << endl
                               << "Roll Number : " << rollNumber << endl
                               << "Grade : " << grade << endl; }
    void disE(void)
    {
        cout << "Grade : " << grade << endl;
    }
    void display(void)
    {
        disH();
        disS();
        disE();
    }
};
int main()
{
    ////using Construtor
    // Human human("Human");
    // Student student("Student", 1);
    // Exam exam("Student", 2, 'A');
    // human.displayH();
    // student.displayH();
    // student.displayS();
    // exam.displayH();
    // exam.displayS();
    // exam.displayE();

    // Using Member Function
    Exam exam;
    exam.setName("Shubham Jaiswar");
    exam.setRollNumber(153);
    exam.setGrade('A');
    exam.display();
    return 0;
}