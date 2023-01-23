#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
//----------------VIRTUAL BASE CLAASS-------------------
/*                                                                                                        |-->'B'-->|
In Hybrid Inheritance : if 'B' and 'C' is derived from 'A' and 'D' is derived from 'B' and 'C',     'A'-->|         |-->'D'
===>since there will some member/memberFunction similar in 'B' and 'C',therefore some                     |-->'C'-->|
ambiguity will occur for 'D'
therefore,to overcome this we will declare 'B' and 'C' as inheritance of virtual base class 'A'
due to which the copy of member/memberFunction will be not form
SYNTAX: (just write virtual before the visiblity mode)

class derivedClassName: virtual {{visiblity mode}} baseClassName{

};

(OR)

class derivedClassName: {{visiblity mode}} virtual baseClassName{

};

*/
class Student
{
protected:
    string name;
    int rollNo;
    float marks;

public:
    void set1(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;
    }
    void displayInfo()
    {
        cout << "Name : " << name << endl
             << "Roll No. : " << rollNo << endl
             << "Marks : " << marks << endl;
    }
};
class Club : virtual protected Student
{
protected:
    float clubMarks, result;

public:
    void set2(string n, int r, float m, float c)
    {
        set1(n, r, m);
        clubMarks = c;
        result = (marks + clubMarks) / 2.0;
    }
    void displayTM()
    {
        displayInfo();
        cout << "Club Marks : " << clubMarks << endl;
        cout << "Result : " << result << endl;
    }
};
class Sport : virtual protected Student
{
protected:
    float sportScore, result;

public:
    void set3(string n, int r, float m, float s)
    {
        set1(n, r, m);
        sportScore = s;
        result = (marks + sportScore) / 2.0;
    }
    void displaySM()
    {
        displayInfo();
        cout << "Sport Marks : " << sportScore << endl;
        cout << "Result : " << result << endl;
    }
};
class BothCS : protected Club, protected Sport
{
protected:
    float result;

public:
    void set4(string n, int r, float m, float c, float s)
    {
        set2(n, r, m, c);
        set3(n, r, m, s);
        result = (marks + clubMarks + sportScore) / 3.0;
    }
    void displayR()
    {
        displayInfo();
        cout << "Club Marks : " << clubMarks << endl;
        cout << "Sport Marks : " << sportScore << endl;
        cout << "Result : " << result << endl;
    }
};
vector<Student> type1;
vector<Club> type2;
vector<Sport> type3;
vector<BothCS> type4;
void Input1()
{
    string name;
    int rollNo;
    float marks;
    cout << "Name : ";
    cin >> name;
    cout << "Roll No. : ";
    cin >> rollNo;
    cout << "Marks : ";
    cin >> marks;
    Student temp1;
    temp1.set1(name, rollNo, marks);
    type1.push_back(temp1);
}
void Input2()
{
    string name;
    int rollNo;
    float marks, clubMarks;
    cout << "Name : ";
    cin >> name;
    cout << "Roll No. : ";
    cin >> rollNo;
    cout << "Marks : ";
    cin >> marks;
    cout << "Club Marks : ";
    cin >> clubMarks;
    Club temp2;
    temp2.set2(name, rollNo, marks, clubMarks);
    type2.push_back(temp2);
}
void Input3()
{
    string name;
    int rollNo;
    float marks, sportMarks;
    cout << "Name : ";
    cin >> name;
    cout << "Roll No. : ";
    cin >> rollNo;
    cout << "Marks : ";
    cin >> marks;
    cout << "Sport Marks : ";
    cin >> sportMarks;
    Sport temp3;
    temp3.set3(name, rollNo, marks, sportMarks);
}
void Input4()
{
    string name;
    int rollNo;
    float marks, clubMarks, sportMarks;
    cout << "Name : ";
    cin >> name;
    cout << "Roll No. : ";
    cin >> rollNo;
    cout << "Marks : ";
    cin >> marks;
    cout << "Club Marks : ";
    cin >> clubMarks;
    cout << "Sport Marks : ";
    cin >> sportMarks;
    BothCS temp4;
    temp4.set4(name, rollNo, marks, clubMarks, sportMarks);
    type4.push_back(temp4);
}
void display()
{
    cout << "Type 1 Students : " << endl;
    for (int i = 0; i < type1.size(); i++)
    {
        type1[i].displayInfo();
    }
    cout << "Type 2 Students : " << endl;
    for (int i = 0; i < type1.size(); i++)
    {
        type2[i].displayTM();
    }
    cout << "Type 3 Students : " << endl;
    for (int i = 0; i < type1.size(); i++)
    {
        type3[i].displaySM();
    }
    cout << "Type 4 Students : " << endl;
    for (int i = 0; i < type1.size(); i++)
    {
        type4[i].displayR();
    }
}
int main()
{
    system("cls");
    int size; // No. of student
    cout << "Enter No. of Student : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int type;
    TYPE:
        cout << "Type : " << endl
             << "1 : For Students only study :( " << endl
             << "2 : For Student in Club :) " << endl
             << "3 : For Student in Sport :) " << endl
             << "4 : For Student In Both(Sport and Club) :| " << endl;
        cout << "Student No." << i + 1 << " data : " << endl;
        cout << "Enter the Type of the Student : ";
        cin >> type;
        if (type == 1)
            Input1();
        else if (type == 2)
            Input2();
        else if (type == 3)
            Input3();
        else if (type == 4)
            Input4();
        else
        {
            cout << "Invalid Entry" << endl
                 << "Try Again...." << endl;
            goto TYPE;
        }
    }
    display();
    getch();
    return 0;
}