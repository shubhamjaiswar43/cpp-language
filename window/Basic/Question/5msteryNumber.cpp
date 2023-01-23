#include<iostream>
using namespace std;
/*
Mystery Number is Number which is a sum of a Number and it reverse Number;
*/
// int isReverse(int n)
// {
//     int a=n;
//     int rev=0;
//     while (n>0)
//     {
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     }
//     if (a==rev)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     } 
// }
int revNum(int n){
    int rev=0;
    while (n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    return rev;
}
int main()
{
    int lowerRange,upperRange;
    cout<<"Enter the lower limit of range"<<endl;
    cin>>lowerRange;
    cout<<"Enter the Higher limit of range"<<endl;
    cin>>upperRange;
    cout<<"The Mystery Number in range of "<<lowerRange<<"-"<<upperRange<<" is "<<endl;
    // for (int i = lowerRange; i < upperRange; i++)
    // {
    //     for (int j = lowerRange; j < upperRange; j++)
    //     {
    //         if (i==j)
    //         {
    //             continue;
    //         }
    //         if(i==revNum(j)){
    //             cout<<i<<"+"<<j<<"="<<i+j<<endl;
    //         }
    //     } 
        
    // } 
    int i=lowerRange; 
    label:
    if (i<10)
    {
        i++;
        goto label;
    }
    
    while((i+revNum(i))<upperRange)
    {
        cout<<i<<"+"<<revNum(i)<<"="<<(i+revNum(i))<<endl;
        i++;
    }
    
    return 0;
} 