#include <iostream>
using namespace std;
class c2;
class c1
{
    int value;
    friend void swapData(c1 &, c2 &);

public:
    void indata(int a)
    {
        value = a;
    }
    void display(void)
    {
        cout << "The value of member of class c1 is : " << value << endl;
    }
};
class c2
{
    int value;
    friend void swapData(c1 &, c2 &);

public:
    void indata(int a)
    {
        value = a;
    }
    void display(void)
    {
        cout << "The value of member of class c2 is : " << value << endl;
    }
};
void swapData(c1 &a, c2 &b)
{
    // swap data without using third variable;
    (a.value) = (a.value) + (b.value);
    (b.value) = (a.value) - (b.value);
    (a.value) = (a.value) - (b.value);
}

int main()
{
    c1 z1;
    c2 z2;
    z1.indata(12);
    z2.indata(-22);
    z1.display();
    z2.display();
    swapData(z1, z2);
    z1.display();
    z2.display();
    return 0;
}