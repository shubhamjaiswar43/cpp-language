#include <iostream>
#include <string>
using namespace std;
/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 */

// ------------------ASCII VALUE----------------
// NUMBER  :   CHAR
//   48    :    0
//   49    :    1
//   50    :    2
//   51    :    3
//   52    :    4
//   53    :    5
//   54    :    6
//   55    :    7
//   56    :    8
//   57    :    9
   
/*
---------------DETAILS----------------
RUNTIME = 6ms
MEMORY USAGE = 8mb
*/
int main()
{
    string ans1 = "FizzBuzz"; //   divisible by 3 and 5.
    string ans2 = "Fizz";     //        divisible by 3.
    string ans3 = "Buzz";     //        divisible by 5.
    int n;
    cout << "Enter the size of the string array : ";
    cin >> n;
    string ans[n];
    cout<<"The string array is : "<<endl<<"[";
    for (int i = 0; i < n; i++)
    {
        if ((i+1) % 3 == 0 && (i+1) % 5 == 0)
        {
            ans[i] = ans1;
        }
        else if ((i+1) % 3 == 0)
        {
            ans[i] = ans2;
        }
        else if ((i+1) % 5 == 0)
        {
            ans[i] = ans3;
        }
        else
        {
            ans[i] = to_string(i+1);
        }
        cout<<ans[i];
        if (i != (n-1))
        {
            cout<<" ,";
        }
        
    }
    cout<<"]"<<endl;
    
    
    
    return 0;
}