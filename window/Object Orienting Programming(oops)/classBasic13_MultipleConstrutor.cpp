#include<iostream>
#include<cmath>
using namespace std;
// A class can have multiple construtor;
// it is called as construtor overloading;
// the construtor can be differ from taking parameter;
// and as we crete a object ,
// then complier will detect the which construtor is suitable;
class Point{ 
    int x,y;
    friend float Edistance(Point ,Point);
    public:
        void displayPoint(void){
            cout<<"Your Point is ("<<x<<" , "<<y<<")"<<endl;
        }
        Point(void){ // for point on origin;   ----> default construtor;
            x = 0;
            y = 0;
            displayPoint();
        }
        Point(int a){ //for point on x-axis;   ----> parameterized construtor;
            x = a;
            y = 0;
            displayPoint();
        }
        Point(int a,int b){    //                ----> parameterized construtor;
            x = a;
            y = b;
            displayPoint();
        }
        // //we can make only one construtor for all the above construtor;
        // //as we can use default arguments in construtor;
        // Point(int a = 0,int b = 0){
        //     x = a;
        //     y = b;
        //     displayPoint();
        // }
};
float Edistance(Point a,Point b){
    float temp;
    temp = (sqrt(((a.x-b.x)*(a.x-b.x)) + ((a.y-b.y)*(a.y-b.y))));
    return temp;
}
int main()
{
    Point a;
    Point b(5);
    cout<<"the distance between this two points is : d = "<<Edistance(a,b)<<endl;

    int x1,y1,x2,y2;

    cout<<"Enter the first point(in (x,y) format) : "<<endl;
    cin>>x1;
    cin>>y1;
    Point p(x1,y1);
    
    cout<<"Enter the second point(in (x,y) format) : "<<endl;
    cin>>x2;
    cin>>y2;
    Point q(x2,y2);

    cout<<"the distance between this two points is : d = "<<Edistance(p,q)<<endl;
    return 0;
}