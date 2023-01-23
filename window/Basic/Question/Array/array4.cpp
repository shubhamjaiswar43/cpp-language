#include<iostream>
#include<vector>
using namespace std;
// Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order.
void VectorPrint(vector<int> &v)
{
    cout<<"{";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        if (i != (v.size()-1))
        {
            cout<<" ";
        }
        
    }
    cout<<"}"<<endl;
}
void VectorSorting(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (v[i]>v[j])
            {
                v[i]=v[i]+v[j];
                v[j]=v[i]-v[j];
                v[i]=v[i]-v[j];
            }    
        }   
    }
}

int main(){
    vector<int> v;
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    cout<<"Enter the Element of the vector : "<<endl;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Your vector : ";
    VectorPrint(v);

    for (int i = 0; i < size; i++)
    {
        v[i]*=v[i];
    }

    VectorSorting(v);
    cout<<"New vector(square each element and sorted) : ";
    VectorPrint(v);


    return 0;
}