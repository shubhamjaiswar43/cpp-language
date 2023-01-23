#include<iostream>
using namespace std;
/*
WAP to declare a class Box' having data member as height, width and breadth. Accept data and
display volume using pointer to thc object(10M).
*/
class Box{
    float height,width,breadth;
public:
    void setDetails(float height, float width, float breadth){
        this->height = height;
        this->width = width;
        this->breadth = breadth;
    }
    void display(){
        cout<<"Volume = "<<height<<" * "<<width<<" * "<<breadth<<" = "<<(height*width*breadth)<<endl;
    }
};
int main()
{
    float height,width,breadth;
    Box b,*ptr=&b;
    cout<<"Enter Height,Width and Breadth : "<<endl;
    cin>>height>>width>>breadth;
    ptr->setDetails(height,width,breadth);
    ptr->display();

    return 0;
}