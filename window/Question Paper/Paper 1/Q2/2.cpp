#include <iostream>
using namespace std;
/*
WAP for class calci accept two numbers and display addition, subtraction, division and multiplication
using different functions.
*/
class Calci
{
    float x, y;

public:
    Calci() {}
    Calci(float x, float y) : x(x), y(y) {}
    void setData(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << x << " + " << y << " = " << (x + y) << endl;
        cout << x << " - " << y << " = " << (x - y) << endl;
        cout << x << " * " << y << " = " << (x * y) << endl;
        cout << x << " / " << y << " = " << (x / y) << endl
             << endl;
    }
};
int main()
{
    float x, y;
    Calci c1;
    while (1)
    {
        cout<<"Enter -1 twice two end"<<endl<<endl;
        cout << "Enter Two Numbers : " << endl;
        cin >> x >> y;
        c1.setData(x,y);
        c1.display();
        if(x==-1 && y==-1){
            break;
        }
    }
    return 0;
}