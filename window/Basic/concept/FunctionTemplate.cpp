#include<iostream>
#include<iomanip>
using namespace std;
//WE CAN ALSO CREATE A TEMPLATE FOR FUNCTION AS SAME AS CLASS TEMPLATE
//WE CAN ALSO OVERLOAD THE TEMPLATE FUNCTION AS FUNCTION OVERLOADING,i.e same name of function and template function
//exact match will have highest priority
template<class t1,class t2>
float avg(t1 a,t2 b){//now we can find avg of any pair==>(int ,int),(int ,float),(float,float) and so on.
    return ((a+b)/2.0);
}
template<class T>
void Swap(T &x,T &y){//same here we can swap any variable,using one function by creating it as Function template
    T temp;
    temp = x;
    x = y;
    y = temp;
}
void func(int x){
    cout<<"Hello, I am Normal Function : "<<x<<endl;
}
template<class T>
void func(T x){
    cout<<"Hello, I am Template Function : "<<x<<endl;
}
int main()
{
    float a;
    a=avg(5,10);
    cout<<a<<endl;
    a=avg(10.6,983.2);
    cout<<a<<endl;
    char x='x',y='y';
    cout<<"x = "<<x<<",y = "<<y<<endl;
    Swap(x,y);
    cout<<"x = "<<x<<",y = "<<y<<endl;
    func(5);//here ,normal function will be called ,because it is exactly matched
    func('s');//here,obviously the template function will be called
    return 0;
}