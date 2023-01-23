#include <iostream>
using namespace std;
// ------------------------------------------------------------------
// *********    Static Variable And Functions in Oops    ************
// ------------------------------------------------------------------
class employee
{
private:
    string name;
    static int count; // this will common for all the object of the class employee;


public:
    void setdata(void);
    void getdata(void);
    void static getcount(void);     //this static method will have access only for static variable of the class;
};
void employee::setdata(void)
{
    cout << "Enter the Name of the Employee No." << (count + 1) << endl;
    cin >> name;
}
void employee::getdata(void)
{
    cout<<"----------------------------------------------"<<endl;
    cout << "The Name of the Employee No." << ++count << " is : " << name << endl;
    cout<<"----------------------------------------------"<<endl;
}
void employee::getcount(void){
    cout<<"The value of count is : "<<count<<endl<<endl<<endl;
    // cout<<name;  //this will show a error bcoz name is not a static member of the class
}
int employee::count; //want to initialized,this is imp for declaration of static variable in a class,bcoz to acess by all object for sharing
int main()
{
    employee e1;
    e1.setdata();
    e1.getdata();
    employee::getcount();

    employee e2;
    e2.setdata();
    e2.getdata();
    employee::getcount();

    employee e3;
    e3.setdata();
    e3.getdata();
    employee::getcount();

    return 0;
}