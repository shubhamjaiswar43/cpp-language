#include<iostream>
using namespace std;
// "->" arrow operator
/*
Operator Overloading : In this we will assign a operator as a function in a class
Two types : 
1)Unary Operator Overloading : Only one object is taken

(for pre-operator using)

(main function(i.e calling))
operator_symbol object_name;

(class(i.e declaration))
return_type operator operator_symbol(){
    operation;
}

(Note : for post-operator using, the operator symbol is written in bracket)
(for post-operator using)

(main function(i.e calling))
object_name operator_symbol;

(class(i.e declaration))
return_type operator(operator_symbol){
    operation;
}

2)Binary Operator Overloading : Two object is taken

(main function(i.e calling))
object_name1 operator_symbol object_name2;

(class(i.e declaration))
return_type operator operator_symbol(class_name temp_name(for object_name1)){
    operation;
}
*/
class Complex{
    int Re,Im;
    public:
    friend Complex cSum(Complex &,Complex &);
    Complex():Re(0),Im(0){}
    Complex(int x,int y):Re(x),Im(y){}
    void show(void){
        if(Im<0 && Im!=-1){
            cout<<"Complex Number : "<<Re<<Im<<"i"<<endl;
        }
        else if(Im==1){
            cout<<"Complex Number : "<<Re<<"+i"<<endl;
        }
        else if(Im==-1){
            cout<<"Complex Number : "<<Re<<"-i"<<endl;
        }
        else{
        cout<<"Complex Number : "<<Re<<"+"<<Im<<"i"<<endl;
        }
    }
    Complex operator -(Complex z){
        Complex temp;
        temp.Re=Re-z.Re;
        temp.Im=Im-z.Im;
        return temp;
    }
};
Complex cSum(Complex &z1,Complex &z2){
    Complex sum;
    sum.Re = z1.Re + z2.Re ;
    sum.Im = z1.Im + z2.Im ;
    return sum;
}
int main()
{
    Complex z1(1,1),z22(1,-1);
    Complex *p1=&z1,*p2=&z22; //since the class is also become a data_type
    // z1.show();
    // z2.show();
    cout<<" z1 : ";
    (*p1).show();
    cout<<" z2 : ";
    p2->show();
    Complex *ptr = new Complex(2,5);
    cout<<" ptr : ";
    ptr->show();
    delete ptr;
    Complex *ptr2 = new Complex;
    *ptr2 = Complex(10,-9);
    ptr2->show();
    delete ptr2;

    //Arrays of object
    Complex *c = new Complex[5];
    *c = Complex(2,6);
    *(c+1) = Complex(3,6);
    *(c+2) = Complex(4,6);
    *(c+3) = Complex(5,6);
    *(c+4) = Complex(6,6);
    cout<<endl<<"Array(5) of Complex : "<<endl;
    c[0].show();
    c[1].show();
    (c+2)->show();
    (*(c+3)).show(); // "." has more preference than "*" ,so bracket is must
    (c+4)->show();
    Complex sum,sub;
    sum=cSum(c[0],c[1]);
    sub=c[2]-c[3];
    cout<<"Sum of c0 and c1 is : "<<endl;
    sum.show();
    sub.show();
    return 0;
}