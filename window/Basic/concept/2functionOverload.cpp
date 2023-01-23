#include<iostream>
/*
We can use multiple function with same name and different 
argument ,this is called as function overload.
In this complier will detect the function by argument
*/
using namespace std;
float volume(int a,int b,int c){ 
    return a*b*c;
}
float volume(int a,int b){
    return 3.142*a*a*b;
}
float volume(int a){
    return a*a*a;
}
int main()
{
    cout<<"The Volume of cuboid with side 5,2 and 7 is "<<volume(5,2,7)<<endl;
    cout<<"The Volume of cylinder with radius 5 and height 2 is "<<volume(5,2)<<endl;
    cout<<"The Volume of cube with side 5 is "<<volume(5)<<endl;

    return 0;
}