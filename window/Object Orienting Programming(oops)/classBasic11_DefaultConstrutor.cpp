#include <iostream>
using namespace std;
// ------------------------------------------------------------------|
// **************    Construtor in a class of Oops    ***************|
// ------------------------------------------------------------------|

// ---------------------------------------------------------------------|
// Characteristics of Construtor;                                       |
// 1. It should be declared in the public section of the class;         |
// 2. It is automatically invoked(call) whenever we create a object;    |
// 3. They can't return any data_type ,that is why they do not have     |
//    return type(also can't have void return type);                    |
// 4.It can have default argument;                                      |
// 5.We cannot refer to their address;                                  |
// ---------------------------------------------------------------------|

class complex
{
    int a, b;

public:
    // Creating a construtor: it is a special member function which have same name as the name of class;
    // it is automatically invoked(call) whenever a object is created;
    // and does'nt required to declared return type of construtor;
    // if construtor does not take any parameter ,then it is called as default contrutor;
    complex(void); // construtor declaration-------> this is a default construtor;
    void display(void)
    {
        cout << "Your complex no. is : z = (" << a << ") + (" << b << ")i"<<endl;
    }
};
complex ::complex(void)
{
    a = 0;
    b = 0;
    display();
}
int main()
{
    complex z1,z2,z3;
    // z1.display();

    return 0;
}