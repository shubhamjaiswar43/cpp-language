#include <iostream>
#include <string>
using namespace std;
/*
Given two strings ransomNote and magazine,
return true if ransomNote can be constructed by using the letters from magazine
and false otherwise.
Each letter in magazine can only be used once in ransomNote.
*/

/*
---------------DETAILS----------------
RUNTIME = 221ms
MEMORY USAGE = 8.5mb
*/
int canConstruct(string ransomNote, string magazine)
{
    int count = 0;
    for (int i = 0; i < ransomNote.size(); i++)
    {
        for (int j = 0; j < (magazine.size()); j++)
        {
            if (ransomNote.at(i) == magazine.at(j))
            {
                count++;
                magazine.erase((magazine.begin()+j));
                break;
            }
        }
        if (count == ransomNote.size())
        {
            return 1;
        }
        
    }

    return 0;
}
int main()
{
    string ransomNote, magazine;
    cout << "Enter the first string : ";
    cin >> ransomNote;
    cout << "Enter the second string : ";
    cin >> magazine;

    int ans = canConstruct(ransomNote, magazine);
    if (ans == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}