#include<iostream>
using namespace std;
//This example is for understanding order of execution of constructor
//By changing the order of writing (or virtuality) we can see the order
//is changing according to rule
class Base1{
    protected:
        int data1;
    public:
        Base1(int x){
            data1=x;
            cout<<"Base1 Constructor"<<endl;
        }
        void show1(void){
            cout<<"data1 : "<<data1<<endl;
        }
};
class Base2{
    protected:
        int data2;
    public:
        Base2(int x){
            data2=x;
            cout<<"Base2 Constructor"<<endl;
        }
        void show2(void){
            cout<<"data2 : "<<data2<<endl;
        }
};
class Derived:protected Base2,virtual protected Base1{
    protected:
        int data3,data4;
    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b){
            data3=c;
            data4=d;
            cout<<"Derived Constructor"<<endl;
        }
        void show(void){
            show1();
            show2();
            cout<<"data3 : "<<data3<<endl;
            cout<<"data4 : "<<data4<<endl;
        }
};
int main()
{
    Derived d(1,2,3,4);
    d.show();

    return 0;
}