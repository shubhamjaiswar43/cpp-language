#include<iostream>
using namespace std;
/*
WAP to declare a class Rectangle having data member's length and breadth. Accept and display data for
one object(05M).
*/
class Rectangle{
    private:
    float length ,breadth;
    public:
    Rectangle(){}
    Rectangle(float x,float y):length(x),breadth(y){}
    void setData(float x,float y){length=x;breadth=y;}
    void display(){
        cout<<"Length : "<<length<<endl;
        cout<<"Breadth : "<<breadth<<endl;
        cout<<"Area : "<<length*breadth<<endl;
    }
};
int main(){
    Rectangle r1(2.2,4.2);
    r1.display();
    cout<<endl;
    r1.setData(0.8,0.3);
    r1.display();

    return 0;
}