#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
/*
round off method
1. lround(int num)======> return round off of num 
2. cout<<fixed<<setprecision(n)<<num; ==============> print num in n decimal places
3. ceil(int num )=========> round of the num to upper integer
4. floor(int num)============> round off the num to lower integer
*/
using namespace std;
float calculateMean(int arr[],int size){
    float mean;
    for (int i=0; i<size; i++) {
        mean+=arr[i];
    }
    return (float)(mean/size);
}
float calculateMedian(int arr[],int size){
    if (size%2) {
        return arr[(int)(size/2)];
    }
    return (float)(arr[(int)(size/2)]+arr[(int)(size/2)-1])/2;
}
float calculateMode(int arr[],int size){
    int occurence[size];
    for (int i=0; i<size; i++) {
        occurence[i]=0;
    }
    int count;
    for (int i=0; i<size; i++) {
        count = 0;
        for (int j=0; j<size; j++) {
            if (arr[i]==arr[j]) {
                count++;
            }
        }
        occurence[i] = count;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<occurence[i]<<" ";
    // }
    // cout<<" : occurence"<<endl;
    
    count = 0;
    for (int i=0; i<size; i++) {
        if (occurence[0]==occurence[i]) {
            count++;
        }
    }
    if (count == size) {
        return arr[0];
    }
    vector<int> common;
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (occurence[i]==occurence[j]) {
                common.push_back(arr[i]);
            }
        }
    }
    // for (int i:common)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<" : common"<<endl;
    
    if (common.size()==1) {  
        return *(common.begin());
    }
    return *(common.begin());
    
    return arr[0];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    getchar();
    int X[N];
    //taking input for all element
    for (int i = 0; i<N; i++) {
        cin>>X[i];
        getchar();
    }
    //sorting the array in increasing order
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++){
            if (X[i]>X[j]) {
                X[i]=X[i]+X[j];
                X[j]=X[i]-X[j];
                X[i]=X[i]-X[j];
            }
        }
    }
    float mean=0,median=0,mode;
    //calculating mean,median and mode;
    mean = calculateMean(X,N);
    median = calculateMedian(X,N);
    mode = calculateMode(X,N);
    
    cout<<"---------"<<endl;
    cout<<mean<<endl;
    cout<<median<<endl;
    cout<<mode<<endl;
    cout<<"---------"<<endl;
    return 0;
}