#include<iostream>
using namespace std;
//By pointing base class pointer to the derived class object,we can only access the base class member by that pointer
class Base{
    public:
        int base;
        Base(){}
        Base(int x):base(x){}
        void display(){
            cout<<"base : "<<base<<endl;
        }
};
class Derived:public Base{
    public:
        int derived;
        Derived(){}
        Derived(int x,int y):Base(x),derived(y){}
        void display(){
            cout<<"base : "<<base<<endl;
            cout<<"derived : "<<derived<<endl;
        }
};
int main(){
    Base base(24),*basePTR=NULL;
    Derived derived(22,44),*derivedPTR=&derived;
    basePTR = &derived;//pointing base class pointer to the derived class object
    basePTR->display();//this will take the display of the base class not derived class,this is called as late binding
    // i.e the pointer binds with the base class member in the run time,therefore it is called as run time polymorpism
    derivedPTR->display();//derived pointer will bind with derived class display

    return 0;
}