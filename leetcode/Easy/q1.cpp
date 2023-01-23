#include <iostream>
using namespace std;
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/
void arrInput(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " Element of the array : ";
        cin >> arr[i];
    }
}
void arrPrint(int size, int arr[])
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != (size - 1))
        {
            cout << " ,";
        }
    }
    cout << "]" << endl;
}
int main()
{
    int size, target;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    arrInput(size, arr);
    cout << "Entered Array : ";
    arrPrint(size, arr);
    cout << "Enter the value of the target : ";
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << " , " << j << "]" << endl;
                cout << "Explanation :" << endl
                     << "arr[" << i << "] + arr[" << j << "] = " << target << endl
                     << arr[i] << " + " << arr[j] << " = " << target << endl;
                break;
            }
        }
    }

    return 0;
}