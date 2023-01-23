#include<iostream>
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
class Student{
    protected:
    string name;
    int rollNo;
    public:
    void set1(string n,int r){
        name = n;
        rollNo = r;
    }
    void displayInfo(){
        cout<<"Name : "<<name<<endl<<"Roll No. : "<<rollNo<<endl;
    }
};
class Test:virtual protected Student{
    protected:
    int testMarks;
    public:
    void set2(string n,int r,int t){
        set1(n,r);
        testMarks = t;
    }
    void displayTM(){
        displayInfo();
        cout<<"Test Marks : "<<testMarks<<endl;
    }
};
class Sport:virtual protected Student{
    protected:
    int sportScore;
    public:
    void set3(string n,int r,int s){
        set1(n,r);
        sportScore = s;
    }
    void displaySM(){
        displayInfo();
        cout<<"Sport Marks : "<<sportScore<<endl;
    }
};
class Result:protected Test,protected Sport{
    protected:
    float result;
    public:
    void set4(string n,int r,int t,int s){
        set2(n,r,t);
        set3(n,r,s);
        result = (testMarks+sportScore)/2.0;
    }
    void displayR(){
        displayTM();
        cout<<"Sport Marks : "<<sportScore<<endl;
        cout<<"Result : "<<result<<endl;
    }
};
int main()
{
    Student s1;
    Test s2;
    Sport s3;
    Result s4;
    s1.set1("s1",1);
    s2.set2("s2",2,95);
    s3.set3("s3",3,98);
    s4.set4("s4",4,78,98);

    s1.displayInfo();
    cout<<endl;

    s2.displayTM();
    cout<<endl;

    s3.displaySM();
    cout<<endl;

    s4.displayR();
    cout<<endl;
    return 0;
}