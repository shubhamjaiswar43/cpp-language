#include <iostream>
using namespace std;
/*Given an integers array 'a', return the prefix sum
running sum in the same array without creating a
new array.*/
void arrayPrint(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        // if (i==0){cout<<"{";}
        i == 0 ? cout << "{" : cout << "";
        cout << arr[i];
        // if (i==(size-1)){cout<<"}";}
        i == (size - 1) ? cout << "}" : cout << "";
        // if (i!=(size-1)){cout<<",";}
        i != (size - 1) ? cout << "," : cout << "";
    }
    cout << endl;
}
int sum(int arr[], int index, int size)
{
    if (index == 0)
    {
        return arr[index];
    }

    else
    {
        return arr[index] + arr[index - 1];
    }
}
void rechange(int arr[], int size)
{
    for (int i = (size - 1); i > 0; i--)
    {
        arr[i] = arr[i] - arr[i - 1];
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " Element of the array : ";
        cin >> a[i];
    }
    cout << "Entered Array : ";
    arrayPrint(a, size);
    for (int i = 0; i < size; i++)
    {
        a[i] = sum(a, i, size);
    }
    cout << "Array of Running sum : ";
    arrayPrint(a, size);
    rechange(a, size);
    // arrayPrint(a,size);
    int upperRange, lowerRange, rangeSum = 0;
    cout << "Enter the range of element which you want to get the sum : "<<endl;
    cin >> lowerRange >> upperRange ;
    for (int i = (lowerRange-1); i < upperRange; i++)
    {
        rangeSum += a[i];
    }
    cout<<"The sum of element in the range("<<lowerRange<<"-"<<upperRange<<") is : "<<rangeSum;

    return 0;
}