#include<iostream>
using namespace std;
// "new" operator is used to allocate memory dynamically
// "delete" operator is used to delete dynamically allocated memory
/*
Syntax : 
for allocation :
data_type variable_name = new data_type(valueOfData);

for deletion : 
delete variable_name;

*/
int main()
{
    float *pi = new float(3.142);
    cout<<"value of pi : "<<*pi<<endl;
    delete pi;
    //for array
    int *arr = new int[3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    cout<<"arr0 : "<<arr[0]<<endl;
    cout<<"arr1 : "<<arr[1]<<endl;
    cout<<"arr2 : "<<arr[2]<<endl;
    delete[] arr;
    return 0;
}