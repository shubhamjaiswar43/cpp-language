#include<iostream>
#include<vector.hpp>
#include<time.h>
#include<iomanip>
using namespace std;
template <class data_type=int>
int LinearSearch(vector<data_type> &arr,data_type &find){
    int index=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i)==find)
            index = i;
    }
    return index;
}

template <class data_type=int>
int BinarySearch(vector<data_type> &arr,data_type &find){
    int low,high,mid,index=-1;
    low = 0;
    high = arr.size()-1;
    mid = (low+high)/2;
    while(low<=high){
        if(arr.at(low)==find){
            index = low;
            break;
        }
        else if(arr.at(high)==find){
            index = high;
            break;
        }
        else if(arr.at(mid)==find){
            index = mid;
            break;
        }
        else if(arr.at(mid)>find){
            high = mid-1;
            mid = (low+high)/2;
        }
        else{
            low = mid+1;
            mid = (low+high)/2;
        }
    }
    return index;
}
int main()
{
    clock_t timeTk;
    vector<int> arr;
    int size;
    struct timespec st,ed;
    cout<<"Enter the size of the array : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int temp = i;
        cout<<"Enter the Element No."<<i<<" : "<<endl;
        // cin>>temp;
        arr.add(temp);
    }
    arr.show();
    cout<<endl;
    int find;
    cout<<"Enter the Element to find : ";
    cin>>find;
    timeTk = clock();
    int ls = LinearSearch(arr,find);
    timeTk = clock()-timeTk;
    cout<<"time taken by linear search : "<<((double)timeTk)/CLOCKS_PER_SEC<<endl;
    int bs = BinarySearch(arr,find);
    cout<<"ls = "<<ls<<endl;
    cout<<"bs = "<<bs<<endl;
    return 0;
}