#include<iostream>
using namespace std;
//class X;
class Y;//this forward declaration is required because Y is use in line no. 7;
class X{
    int data;
    friend void addFunction(X,Y);
    public:
        void setValue(int value){
            data = value;
        }
};
class Y{
    int data;
    friend void addFunction(X,Y);
    public:
        void setValue(int value){
            data = value;
        }
};
void addFunction(X a,Y b){
    cout<<"Sum of datas of X and Y is : "<<(a.data+b.data);
}
int main()
{
    X d1;
    Y d2;
    d1.setValue(12);
    d2.setValue(-52);
    addFunction(d1,d2);

    return 0;
}