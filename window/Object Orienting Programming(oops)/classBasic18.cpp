#include <iostream>
using namespace std;
// ----------------------SINGLE INHERITANCE EXAMPLE---------------------
class Base
{
    int data1;

public:
    int data2;
    Base()
    {
        data1 = 5;
        data2 = 15;
    }
    Base(int a, int b)
    {
        data1 = a;
        data2 = b;
    }

    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};
void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1(void)
{
    return data1;
}
int Base ::getdata2(void)
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void process(void);
    void display();
};
void Derived ::process(void)
{
    data3 = (data2)*getdata1();
}
void Derived ::display(void)
{
    cout << "The value of data1 is : " << getdata1() << endl;
    cout << "The value of data2 is : " << getdata2() << endl;
    cout << "The value of data3 is : " << data3 << endl;
}
int main()
{
    Derived d, d2;
    // d.setdata();
    cout << endl
         << "Datas of d (using construtor): " << endl;
    d.process();
    d.display();

    cout << endl
         << "Datas of d2 (using setdata member function): " << endl;
    d2.setdata();
    d2.process();
    d2.display();

    // Derived d3(2,3);  ==>can't use construtor which are taking arguments
    Base b(2, 3);
    cout << endl
         << "Datas of b(base class) (using construtor which are taking argument): " << endl;
    cout << "The value of data1 is : " << b.getdata1() << endl;
    cout << "The value of data2 is : " << b.data2 << endl;
    return 0;
}