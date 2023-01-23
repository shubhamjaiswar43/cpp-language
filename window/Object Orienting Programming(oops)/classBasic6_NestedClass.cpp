#include<iostream>
using namespace std;
// ------------------------------------------------------------------
// ******   Nested Class(i.e using same class in the class)   *******
// ------------------------------------------------------------------
class complex{
    int a,b;
    public:
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        void setDataBySum(complex p ,complex q){
            a=p.a+q.a;
            b=p.b+q.b;
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
int main()
{
    complex z1,z2,z3;
    z1.setdata(4,5);
    z1.display();
    z2.setdata(11,-35);
    z2.display();
    z3.setDataBySum(z1,z2);
    z3.display();

    return 0;
}