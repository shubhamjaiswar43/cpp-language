#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list): initilization-section{
assignment + other code;
}
*/
class Test{
    int a,b;
    public:
    // Test(int x,int y):a(x),b(y){
    // Test(int x,int y):a(x),b(y+x){
    // Test(int x,int y):a(x),b(y+a){
    // Test(int x,int y):a(x),b(a*a*y){
    // Test(int x,int y):b(a*a*y),a(x){//this will also execute bcoz a will initialize first then b(a is 1st declared)
    // Test(int x,int y):b(y),a(x*b){//this will give a garbage value for a,bcoz a will 1st initialize,where b has some garbage value,afterwards b will initialize
    Test(int x,int y):a(x),b(a*a*y){
        cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
    }
};
int main()
{
    Test t(2,5);

    return 0;
}