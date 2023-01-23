#include<iostream>
using namespace std;
/*
WAP for class Distance. initialize two variables using constructor, store their addition in third variable
using function and display it(10M).
*/
class Distance{
    private:
        float x,y,z;
    public:
    Distance(float x,float y):x(x),y(y){}
    //ALTERNATE METHOD
    // Distance(float x,float y){
    //     this->x=x;
    //     this->y=y;
    // }
    void displaySum(){
        z = x + y;
        cout<<x<<" + "<<y<<" = "<<z;
    }
};
int main()
{
    Distance d1(5.89,9.48);
    d1.displaySum();

    return 0;
}