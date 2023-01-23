#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
float Median(vector<int> &x,vector<int> &y){
    for (int i = 0; i < y.size(); i++)
    {
        x.push_back(y[i]);
    }
    sort(x.begin(),x.end());
    if (x.size()%2)
    {
        return (float)x[x.size()/2];
    }
    else{
        return ((float)x[x.size()/2]+x[x.size()/2-1])/2;
    }
}
int main()
{
    vector<int> x,y;
    int m,n;
    cout<<"Enter the size of the first array : ";
    cin>>m;
    cout<<"Enter the element of the first matrix : "<<endl;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        x.push_back(temp);
    }
    cout<<"Enter the size of the second array : ";
    cin>>n;
    cout<<"Enter the element of the second matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        y.push_back(temp);
    }
    float median;
    median=Median(x,y);
    cout<<"The median of the combine array is : "<<median;
    return 0;
}