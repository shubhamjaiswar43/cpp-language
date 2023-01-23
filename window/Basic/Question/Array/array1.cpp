#include <iostream>
using namespace std;
//Sorting an array
//Input : arr[] = { 5 2 9 1 8 }
//Output : arr[] = { 1 2 5 8 9 }
int main()
{
    int n;
    
    cout<<"Enter the size of array: "; cin>>n;
    
    int a[n];
    
    cout<<"\nEnter the elements: ";
    for(int i=0; i<n; i++) cin>>a[i];
      
      
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    cout<<"\nArray after sorting : { ";
   
    for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
    cout<<"}";
    return 0;
}