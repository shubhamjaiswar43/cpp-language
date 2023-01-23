#include <iostream>
#include <vector>
using namespace std;
/*
Given a 6X6 array . find sum of all shape of watchglass(their are 16 watchglass in the array)
and print the max one;
watch glass shape:
a b c
  d  
e f g
*/
/*
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 9 2 -4 -4 0
0 0 0 -2 0 0
0 0 -1 -2 -4 0
//7 
*/
//{00,01,02,11,20,21,22}{01,02,03,12,21,22,23}
void input(vector<vector<int>> &v)
{
    for (int i = 0; i < 6; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 6; j++)
        {
            int temp1;
            cin >> temp1;
            temp.push_back(temp1);
        }
        v.push_back(temp);
    }
}
int rtans(vector<vector<int>> &v)
{
    int maxsum=INT16_MIN,sum=0,count=0;
    int i=0,j=0;
    while (count<16)
    {
        sum=(v[i][j])+(v[i][(j+1)])+(v[i][(j+2)])+(v[(i+1)][(j+1)])+(v[(i+2)][j])+(v[i+2][(j+1)])+(v[i+2][(j+2)]);
        if (maxsum<sum)
        {
            maxsum=sum;
        }
        count++;
        if (count%4==0)
        {
            i++;
            j=0;
        }
        else{
            j++;
        }
    }
    return maxsum;
}
int main()
{
    vector<vector<int>> v;
    input(v);
    int maxsum = rtans(v);
    cout << maxsum;
}