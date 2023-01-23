#include<iostream>
using namespace std;
//Input : Two arrays
//Output : A sorted array containing elements of both array.
//Input : arr1[]={1,9,5,11,7},arr2[]={2,13,4,19,8}
//Output : arr[]={1,2,4,5,7,8,9,11,13,19}

void ArrayInput(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void ArrayPrint(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {
        // if (i==0){cout<<"{";}
        i==0 ? cout<<"{":cout<<"";
        cout<<arr[i];
        // if (i==(size-1)){cout<<"}";}
        i==(size-1) ? cout<<"}":cout<<"";
        // if (i!=(size-1)){cout<<",";}
        i!=(size-1) ? cout<<",":cout<<"";

    }
    cout<<endl;
}
void ArraySorting(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j]){ 
                arr[i] = arr[j] + arr[i] ;
                arr[j] = arr[i] - arr[j] ;
                arr[i] = arr[i] - arr[j] ;
            }
        }
    }
    
}

int main()
{
    int m,n;

    cout<<"Enter the size of first array"<<endl;
    cin>>m;
    int arr1[m];
    cout<<"Enter the Elements of 1st array(the elements should be sorted)"<<endl;
    ArrayInput(arr1,m);

    cout<<"Enter the size of second array"<<endl;
    cin>>n;
    int arr2[n];
    cout<<"Enter the Elements of 2nd array(the elements should be sorted)"<<endl; 
    ArrayInput(arr2,n);

    int arr[m+n];
    for (int i = 0; i < (m+n); i++)
    {
        i<m ? arr[i]=arr1[i]:arr[i]=arr2[i-m];
    }
    cout<<endl<<"Default Arrays : ";
    cout<<endl<<"arr1 = ";
    ArrayPrint(arr1,m);
    cout<<"arr2 = ";
    ArrayPrint(arr2,n);
    cout<<"arr = ";
    ArrayPrint(arr,m+n);

    ArraySorting(arr1,m);
    ArraySorting(arr2,n);
    ArraySorting(arr,m+n);

    cout<<endl<<"Sorted Arrays : ";
    cout<<endl<<"arr1 = ";
    ArrayPrint(arr1,m);
    cout<<"arr2 = ";
    ArrayPrint(arr2,n);
    cout<<"arr = ";
    ArrayPrint(arr,m+n);

    return 0;
}