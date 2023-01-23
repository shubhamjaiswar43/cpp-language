#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string> strs) {
    char commonPrefix[strs[0].size()];
    for (int i = 0; i < (strs[0].size()); i++){
        int count = 0;
        commonPrefix[i] = strs[0].at(i);
        for (int j = 0; j < strs.size(); j++){
            if ((strs[j].at(i)) == (commonPrefix[i])){
                count++;
            }
        }
        if ((count != strs.size()) && (i == 0)){
            string ans="\"\"";
            return ans;
        }
        else if (count != strs.size()){
            commonPrefix[i] = '\0';
            return commonPrefix;
        }
    }
    return commonPrefix;
    }
int main()
{
    vector<string> strs;
    int size;
    cout<<"Enter the size of the of string array : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        string temp;
        cout<<"Enter the Element(string) of index No."<<i<<" : ";
        cin>>temp;
        strs.push_back(temp);
    }
    string ans = longestCommonPrefix(strs);
    cout<<"The longest common prefix in the Entered string vector is : "<<ans;
    return 0;
}