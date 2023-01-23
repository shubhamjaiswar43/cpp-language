#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.1428571428571428571428571428571
/*
Create 2 classes:

1. SimpleCa1cu1ator -
Takes input of 2 numbers using a utility function and perfoms
" + , - , * , / "  and displays the results using another function.

2. ScientificCa1cu1ator -
Takes input of 2 numbers using a utility function and perfoms
any four scientific operation of your chioice and displays
the results using another function.

3. Create another class HybridCa1cu1ator and inherit it using 2nd classes -
Create an object of HybridCa1cu1ator and display results of simple and
scientific calculator.

Q1. What type of Inheritance are you using ?
Q2. Which mode of Inheritance are you using ?
Q3. How is code reusability implemented ?
*/
float factorial(float f)
{
    float fact = 1;
    for (float i = f; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
class SimpleCalculator
{
protected:
    float p, q;

public:
    void setPQ(float x, float y)
    {
        p = x;
        q = y;
    }
    void displaySimpleOperation()
    {
        cout << "The Sum of (" << p << "," << q << ") is : " << (p + q) << endl;
        cout << "The Difference of (" << p << "," << q << ") is : " << (p - q) << endl;
        cout << "The Multiplication of (" << p << "," << q << ") is : " << (p * q) << endl;
        cout << "The Division of (" << p << "," << q << ") is : " << (p / q) << endl;
    }
};
class ScienticficCalculator : protected SimpleCalculator
{
protected:
    float r;

public:
    void setPQR(float x, float y, float z)
    {
        setPQ(x, y);
        r = z;
    }
    void displayScientificOperation()
    {
        displaySimpleOperation();
        cout << "The Square of " << r << " is : " << (r * r) << endl;
        cout << "The Inverse of " << r << " is : " << pow(r, -1) << endl;
        cout << "The Log of " << r << " is : " << log10(r) << endl;
        cout << "The Factorial of " << r << " is : " << factorial(lround(r)) << endl;
    }
};
class HybridCalculator : protected ScienticficCalculator
{
protected:
    float angle;
public:
    void setAngle(float x, float y, float z, float theta)
    {
        p = x;
        q = y;
        r = z;
        angle = theta;
    }
    void displayHybridOperation()
    {
        displayScientificOperation();
        cout << "sine of angle : sin(" << angle << ") = " << sin(angle * (PI / 180.00)) << endl;
        cout << "cosine of angle : cos(" << angle << ") = " << cos(angle * (PI / 180.00)) << endl;
        cout << "tan of angle : tan(" << angle << ") = " << tan(angle * (PI / 180.00)) << endl;
    }
};
int main()
{
    float p, q, r, angle;

    cout<<"Enter two Numbers for simple operation : "<<endl;
    cin>>p>>q;
    SimpleCalculator c1;
    c1.setPQ(p, q);
    c1.displaySimpleOperation();
    cout<<endl;

    cout<<"Enter three Numbers for more operation : "<<endl;
    cin>>p>>q>>r;
    ScienticficCalculator c2;
    c2.setPQR(p, q, r);
    c2.displayScientificOperation();
    cout<<endl;

    cout<<"Enter three Numbers and one angle(in degree) for trignometric values : "<<endl;
    cin>>p>>q>>r>>angle;
    HybridCalculator c3;
    c3.setAngle(p, q, r, angle);
    c3.displayHybridOperation();
    cout<<endl;
    return 0;
}
/*
// Q1. What type of Inheritance are you using ?
==>Multilevel Inheritance
// Q2. Which mode of Inheritance are you using ?
==>Protected
// Q3. How is code reusability implemented ?
==>The Class SimpleCalculator is in
   class ScienticficCalculator which
   also is used in HybridCalculator.
   Hence,Code Reusability is implemented
*/