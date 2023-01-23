#include<iostream>
using namespace std;
class complex;      //Required forward declaration (for confirmation for function declared at line no.9)
class calculator{
    public:
        int sum(int x,int y){
            return x+y;
        }
        int sumRealComplex(complex,complex);    //function can only declared and not define because,
                                                //we can't access member of complex here because,
                                                //complier don't know the member the class complex.
        int sumCompComplex(complex,complex);
};
class complex{
    int a,b;
    public:
    // //giving access to function of the class calculator
    // friend int calculator::sumRealComplex(complex,complex); 
    // friend int calculator::sumCompComplex(complex,complex); 

    // giving access to whole class 
    friend class calculator;
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        void display(void){
            cout<<"---------------------------------"<<endl;
            if (b<0)
            {
            cout<<"Your Complex No. is : z = "<<a<<b<<"i"<<endl;
                
            }
            else{
            cout<<"Your Complex No. is : z = "<<a<<"+"<<b<<"i"<<endl;
            }
            cout<<"---------------------------------"<<endl;
        }
};
int calculator::sumRealComplex(complex z1,complex z2){      //Now function can be define 
    return (z1.a+z2.a);
}
int calculator::sumCompComplex(complex z1,complex z2){      //Now function can be define 
    return (z1.b+z2.b);
}
int main()
{
    complex c1,c2;
    c1.setdata(5,11);
    c2.setdata(-25,-15);
    c1.display();
    c2.display();
    calculator calc;
    int res=(calc.sumRealComplex(c1,c2));
    cout<<"the sum of real part of the c1 and c2 is "<<res<<endl;
    int resc=(calc.sumCompComplex(c1,c2));
    cout<<"the sum of real part of the c1 and c2 is "<<resc<<endl;
    //11:07
    return 0;
}