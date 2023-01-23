#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void display(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {59, 78, 56, 8, 22, 53, 52, 5, 62, 2};
    display(arr);
    sort(arr, arr + 10); // sorting in ascending
    display(arr);
    sort(arr,arr+10,greater<int>());//sorting in desending order,where it is taking a parater "greater<int>()" called as function object(Functors)
    display(arr);
    return 0;
}