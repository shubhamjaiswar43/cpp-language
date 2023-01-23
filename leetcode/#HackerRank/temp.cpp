#include <cmath>
#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
/*
0.401
0.341
*/
float NormalTable(float z1,float z2){
    map<float,float> table;
    float count=0,value=0.5,temp=0.0040;
    for (int i=0; i<300; i++) {
        table[count]=value;
        count+=0.01;
        value+=temp;
        if (i%5==0) {
            temp-=0.0001;
        }
    }
    map<float,float>::iterator j;
    for(j=table.begin();j!=table.end();j++){
        cout<<j->first<<"---"<<j->second<<endl;
    }
    if (z1==0) {
        j=table.find(z2);
        return (j->second);
    }
    else{
        float x1,x2;
        j=table.find(z1);
        x1=(j->second);
        j=table.find(z2);
        x2=(j->second);
        return (x2-x1);
    }
}
/*(x-mean)/sd*/
float NormalDistribution(float mean,float sd,float x1,float x2){
    float z1,z2;
    z1=(x1-mean)/sd;
    z2=(x2-mean)/sd;
    z1=abs(z1);
    z2=abs(z2);
    float ans=NormalTable(z1, z2);
    return ans;
}
int main() {
    float mean=20,sd=2;
    float ans1,ans2;
    ans1=NormalDistribution(mean, sd, 0, 19.5);
    ans2=NormalDistribution(mean, sd, 20, 22);
    // cout<<fixed<<setprecision(3)<<ans1<<endl<<fixed<<setprecision(3)<<ans2;
    return 0;
}
