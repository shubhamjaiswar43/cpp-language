#include<iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x,int y); // construtor declaration-------> this is a parameterized construtor as it takes parameters(2s);
    void display(void)
    {
        cout << "Your complex no. is : z = " << a << " + " << b << "i"<<endl;
    }
};
complex ::complex(int x,int y)
{
    a = x;
    b = y;
    display();
}
int main()
{
    //Implicit Call
    complex z1(2,5);
    //Explicit Call
    complex z2=complex(11,5);

    return 0;
}