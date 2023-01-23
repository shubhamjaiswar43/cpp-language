#include<iostream>
using namespace std;
//RULES FOR DECLARING VIRTUAL FUNCTIONS
/*
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.virtual function in base class might not be us
5. If a virtual function is defined in a base class, there is no necessity of redefining it in derived class
*/
class Common{
    protected:
    string name;
    float ratings;
    public:
    Common(string nm,float rt):name(nm),ratings(rt){}
    virtual void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Ratings : "<<ratings<<" ,on a scale of 5"<<endl;
    }
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
    common->display();//this will 1st find the display in the derived if there occurs then it is run,else base class diplay will be run
    common = &movie;
    common->display();
    return 0;
}