#include <cmath>
#include <iostream>
#include<iomanip>
using namespace std;
/*

A manufacturer of metal pistons finds that, on average, 12% of the pistons they
manufacture are rejected because they are incorrectly sized. What is the probability
that a batch of 10 pistons will contain:
1. No more than 2 rejects? = 0.891
2. At least 2 rejects? = 0.342

*/
double factorial(int f){
    double ans=1;
    for (int i=f; i>0; i--) {
        ans*=(double)i;
    }
    return ans;
}
double combination(int n,int r){
    double ans=(factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // int firstq,secondq;
    // cin>>firstq>>secondq;
    int n=10;
    float p=0.12,q=1-p;
    float firstAns=0,secondAns=0;
    for (int i=0; i<=2; i++) {
        firstAns+=combination(n, i)*(pow(p,i))*(pow(q,(n-i)));
    }
    secondAns=1-firstAns+(combination(n, 2)*(pow(p,2))*(pow(q,(n-2))));
    cout<<setprecision(3)<<firstAns<<endl<<setprecision(3)<<secondAns<<endl;
    return 0;
}
