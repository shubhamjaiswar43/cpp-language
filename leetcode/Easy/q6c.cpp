#include <iostream>
#include <vector>
using namespace std;
vector<char> longestCommonPrefix(vector<string> &strs)
{
    vector<char> commonPrefix;
    int x=0;
    for (int i = 0; i < (strs[0].length()); i++)
    {
        int count = 0;
        commonPrefix.push_back(strs[0].at(i));
        for (int j = 0; j < strs.size(); j++)
        {
            if ((strs[j].at(i)) != (commonPrefix[x]))
            {
                count++;
            }
        }
        if (count != 0)
        {
            commonPrefix[x] = '\0';
        }
        else{
            x++;
        }
    }
    return commonPrefix;
}
int main()
{
    vector<string> strs;
    int size;
    cout << "Enter the size of the of string array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string temp;
        cout << "Enter the Element(string) of index No." << i << " : ";
        cin >> temp;
        strs.push_back(temp);
    }
    vector<char> ans = longestCommonPrefix(strs);
    cout << "The longest common prefix in the Entered string vector is : ";
    vector<char>::iterator i;
    for (i = ans.begin(); i !=ans.end(); i++)
    {
        cout<<*i;
    }
    
    return 0;
}