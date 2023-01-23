#include <cmath>
#include <iostream>
#include<iomanip>
using namespace std;
/*
The ratio of boys to girls for babies born in Russia is 1.09 : 1. If there is 1 child born per birth, what proportion of Russian
families with exactly 6 children will have at least 3 boys?
Write a program to compute the answer using the above parameters. Then print your result, rounded to a scale of 3 decimal
places (i.e., 1.234 format).
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
    float rnume=1.09,rdeno=1;
    float p,q;
    p=(rnume)/(rnume+rdeno);
    q=1-p;
    int n=6;
    float ans=0;
    for (int i=3; i<=6; i++) {
        ans+=combination(n, i)*(pow(p,i))*(pow(q,(n-i)));
    }
    cout<<fixed<<setprecision(3)<<ans<<endl;
    return 0;
}
