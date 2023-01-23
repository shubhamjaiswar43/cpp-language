#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
//find the no. of element strictly greater than a element x;
int main()
{
    vector<int> v;
    srand(time(NULL));
    int ele;
    int t = (rand()%10-1);
    for (int i = 0; i < 100; i++)
    {
        int temp;
        temp=rand()%50;
        v.push_back(temp);
        if (i==t)
        {
            ele = temp;
        }
        
    }
    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<"{";
    for(int prt:v)
    {
        cout<<prt<<", ";
    }
    cout<<"}"<<endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    int count=0;
    cout<<endl<<endl<<"The Elements greater than "<<ele<<" (which occurs at index no."<<t<<") is"<<endl<<"{";
    for(int temp:v){
        if (ele < temp)
        {
            cout<<temp<<", ";
            count++;
        }
    
    }
    cout<<"}"<<endl;
    cout<<"Their are "<<count<<" No. strictly greater than that of "<<ele<<"(which occurs at index no."<<t<<")"<<endl;

    return 0;
}