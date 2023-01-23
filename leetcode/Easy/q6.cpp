#include <iostream>
#include <string>
#include <string.h>
using namespace std;
/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/
/*Input: strs = ["flower","flow","flight"]
Output: "fl"*/
/*Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

int main()
{
    int size;
    cout << "Enter the size of the string array : ";
    cin >> size;
    string strs[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Element of index No." << i << " : ";
        cin >> strs[i];
    }
    char commonPrefix[strs[0].size()];
    for (int i = 0; i < (strs[0].size()); i++)
    {
        int count = 0;
        commonPrefix[i] = strs[0].at(i);
        for (int j = 0; j < size; j++)
        {
            if ((strs[j].at(i) == commonPrefix[i]))
            {
                count++;
            }
        }
        if (count != size && i == 0)
        {
            cout << "The common prefix in the Entered string array is : \"\" ";
            return 0;
        }
        else if (count != size)
        {
            commonPrefix[i] = '\0';
            cout << "The common prefix in the Entered string array is : " << commonPrefix<<endl;
            break;
        }
        else if (i == ((strs[0].size())-1))
        {
            commonPrefix[i+1]='\0';
            cout << "The common prefix in the Entered string array is : " << commonPrefix<<endl;
        }

    }
    return 0;
}