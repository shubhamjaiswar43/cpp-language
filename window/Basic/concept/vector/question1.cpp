#include<iostream>
#include<time.h>
#include<vector>
using namespace std;
//write a program to find the last occurence of a element in a vector/array and how many times it occurs;
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
    // cout<<"---------------"<<ele<<"--------------";
    int count=0;
    for(int temp:v)
    {
        if (temp == ele)
        {
            count++;
        }
        
    }
    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i] == ele)
        {
            cout<<endl<<"The Element "<<ele<<" Occurs "<<count<<" times in the vector and it's last occurence is "<<i<<endl;
            break;
        }
        
    }
    
    return 0;
}