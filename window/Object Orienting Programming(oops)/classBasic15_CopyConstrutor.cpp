#include <iostream>
using namespace std;
//---------------COPY CONSTRUTOR----------------------
// It is use to resemble one object same to other ;
// Every class has it own inbuilt copy construtor ;
class Number
{
    int num;

public:
    void display()
    {
        cout << num << endl;
    }
    Number()
    {
        num = 0;
        display();
    }
    Number(int a)
    {
        num = a;
        display();
    }
    Number(int a, int b)
    {
        num = (a + b);
        display();
    }
    // //this is not required as complier supplies its own copy construtor, but is we have to make changes in it,then we can create it;
    // Number(Number & x){ //copy construtor
    //     num = x.num;
    //     display();
    // }
};
int main()
{

    cout << "Number a : ";
    Number a;

    
    
    cout << endl
         << "Number b : ";
    Number b(22);

    
    
    Number c(b); // by passing a object of a class ,copy construtor can be called;
    cout << endl
         << "Number c : ";
    c.display();  // since,In copy construtor of complier does not exist display function;
    
    
    
    Number d = b; // another method to call copy construtor;
    cout << endl
         << "Number d : ";
    d.display();

    
    
    cout << endl
         << "Number e : ";
    Number e = 555; // if only one argument is their then we can also assign value like this;
    
    
    
    cout << endl
         << "Number f : ";
    Number f(22, 11);
    return 0;
}