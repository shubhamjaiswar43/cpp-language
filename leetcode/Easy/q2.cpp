#include <iostream>
#include <string>
using namespace std;
/*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

        Symbol       Value
        I             1
        V             5
        X             10
        L             50
        C             100
        D             500
        M             1000

For example, 2 is written as II in Roman numeral,
            just two ones added together. 12 is written as XII,
            which is simply X + II. The number 27 is written as XXVII,
            which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right.
However, the numeral for four is not IIII. Instead, the number four is written as IV.
Because the one is before the five we subtract it making four.
The same principle applies to the number nine, which is written as IX.
There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.


============== MAIN QUESTIONS ==================
Given a roman numeral, convert it to an integer.


*/

/*
---------------DETAILS----------------
RUNTIME = 7ms
MEMORY USAGE = 6.1mb
*/
int main()
{
    string roman;
    cout << "Enter the Number in 'Roman Number' : ";
    cin >> roman;
    int size = roman.size(), num[size], intNum = 0;
    for (int i = 0; i < size; i++)
    {
        switch (roman.at(i))
        {
        case 'I':
            num[i] = 1;
            break;

        case 'V':
            num[i] = 5;
            break;

        case 'X':
            num[i] = 10;
            break;

        case 'L':
            num[i] = 50;
            break;

        case 'C':
            num[i] = 100;
            break;

        case 'D':
            num[i] = 500;
            break;

        case 'M':
            num[i] = 1000;
            break;

        default:
            cout << "Invalid Roman Number " << endl;
            cout << "Exiting....";
            goto end;
        }
    }

    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        if (i != (size - 1))
        {
            if (num[i] < num[i + 1])
            {
                intNum -= num[i];
                temp++;
            }
        }
        if (temp == 0)
        {
            intNum += num[i];
        }
    }
    cout << "The Interger of roman number (" << roman << ") is : " << intNum << endl;
end:
    return 0;
}