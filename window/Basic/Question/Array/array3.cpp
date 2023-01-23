#include <iostream>
#include <vector>
using namespace std;
// Question
// 1.Given a vector array sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose sum is exactly x.
// 2.Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose |absolute| difference is exactly x.
// 1.Input: {-1,0,1,2,3},x = 2
// 1.Output: Yes(-1+3=2,0+2=2)
// 2.Input: {-1,0,1,2,3},x = 2
// 2.Output: Yes(|((-1)-1)|=2)
int main()
{
    int x, size;
    vector<int> v;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the Element of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << "The Entered vector is : {";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "}" << endl
         << endl
         << "Enter the value of x(for sum) : ";
    cin >> x;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] + v[j] == x)
            {
                if (temp == 0)
                {
                    cout << "Yes";
                }
                cout << endl
                     << v[i] << " + " << v[j] << " = " << x << endl;
                temp++;
            }
        }
    }
    if (temp == 0)
    {
        cout << "No(for sum)";
    }
    cout << endl
         << "Enter the value of x(for absolute difference) : ";
    cin >> x;
    temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((v[i] - v[j] == x) || (v[j] - v[i] == x))
            {
                if (temp==0)
                {
                    cout<<endl<<"Yes";
                }
                
                if (v[i]<0 && v[j]<0)
                {
                    cout << endl
                        <<"|(("<< v[i] << ") - (" << v[j] << "))| = " << x << endl;
                    temp++;   
                }
                else if (v[i]<0)
                {
                    cout << endl
                        <<"|(("<< v[i] << ") - " << v[j] << ")| = " << x << endl;
                    temp++;   
                }
                else if (v[j]<0)
                {
                    cout << endl
                        <<"|("<< v[i] << " - (" << v[j] << "))| = " << x << endl;
                    temp++;   
                }
                
                else{
                    cout << endl
                        <<"|("<< v[i] << " - " << v[j] << ")| = " << x << endl;
                    temp++;
                }
            }
        }
    }
    if (temp == 0)
    {
        cout << "No(for Absolute difference)";
    }
    return 0;
}