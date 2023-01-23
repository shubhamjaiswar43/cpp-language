#include<iostream>
#include<vector>
#include<map>
using namespace std;
/*
Ex. Input : [1,5,2,48,43,11] ,target = 50
    Output : [2,3]
*/

/*
---------------DETAILS----------------
RUNTIME = 28ms
MEMORY USAGE = 11.3mb
*/
vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind]);
			result.push_back(i);			
			return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout<<"Enter the Element of index No."<<i<<" : ";
        cin>>temp;
        v.push_back(temp);
    }
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    vector<int> result = twoSum(v,target);
    cout<<"["<<result[0]<<" , "<<result[1]<<"]";

    return 0;
}