#include<iostream>
#include<cmath>
/*You are a given a three decimal numbers ,
1. Meal Cost
2. Tip Percent
3. Tax Percent 
Amount Payable is the sum of meal cost ,tip and tax;*/
using namespace std;
int main(){
    double mealCost;
    float tipPercent,taxPercent;
    cout<<"Enter the Meal Cost : ";
    cin>>mealCost;
    getchar();
    cout<<"Enter the Tip Percent : ";
    cin>>tipPercent;
    getchar();
    cout<<"Enter the Tax Percent : ";
    cin>>taxPercent;
    getchar();
    float amountPayable,tip,tax;
    tip = ((tipPercent*mealCost)/100);
    tax = ((taxPercent*mealCost)/100);
    amountPayable=mealCost+tip+tax;
    cout<<"The Amount Payable for the customer is : "<<lround(amountPayable)<<endl;
    
    return 0;
}