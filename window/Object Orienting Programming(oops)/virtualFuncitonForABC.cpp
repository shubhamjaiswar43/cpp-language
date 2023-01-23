#include<iostream>
using namespace std;
/*
The Class which is not using in the main function and it is only use for inheritance,
and making other derived class for uses,this type of class is called as,
ABTRACT BASE CLASS;
//ABC => Abstract Base Class ==> also defined as ,ABC is class which have at least one pure virtual functions;
*///===> we can't create objects of ABC
//If a class is a Abstract Base Class ,we can create a pure virtual Function in it ,
//so the redefination of that function in every derived class from that ABC is neccessary;/
/*
SYNTAX:
virtual return_type function_name()=0;
*/
class Common{
    protected:
    string name;
    float ratings;
    public:
    Common(string nm,float rt):name(nm),ratings(rt){}
    virtual void display()=0;//this is pure virtual function ,so every class derived from this should have a function of named display,if there is not present then complier will show error;
};
class Book:public Common{
    protected:
    int NoOfPages;
    public:
    Book(string nm,float rt,int nop):Common(nm,rt),NoOfPages(nop){}
    void display(){
        cout<<endl;
        cout<<"Book Name : "<<name<<endl;
        cout<<"Ratings : "<<ratings<<" ,on a scale of 5"<<endl;
        cout<<"No. of Pages : "<<NoOfPages<<endl;
    }
};
class Movie:public Common{
    protected:
    float watchingHour;
    public:
    Movie(string nm,float rt,float wh):Common(nm,rt),watchingHour(wh){}
    void display(){
        cout<<endl;
        cout<<"Movie Name : "<<name<<endl;
        cout<<"Ratings : "<<ratings<<" ,on a scale of 5"<<endl;
        cout<<"Watching Hours : "<<watchingHour<<endl;
    }
};
int main(){
    Common *common=NULL;
    Book book("Atomic Habits",4.82,282);
    Movie movie("movie",3,2.2);
    common = &book;
    common->display();
    common = &movie;
    common->display();
    return 0;
}