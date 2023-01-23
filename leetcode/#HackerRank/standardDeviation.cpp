#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*10
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060*/
int main()
{
    int size;
    vector<int> list;
    cout << "Enter the No. of the element : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cout << "Enter the Element of Index No." << i + 1 << " : ";
        cin >> temp;
        list.push_back(temp);
    }
    float mean = 0, squaremean = 0;
    for (int i = 0; i < size; i++)
    {
        mean += list[i];
    }
    mean /= size;
    cout<<mean<<endl;
    float standardDeviation=0;
    for (int i = 0; i < size; i++)
    {
        standardDeviation += pow((list[i] - mean), 2);
    }
    cout<<standardDeviation<<endl;
    standardDeviation/=size;
    standardDeviation=pow(standardDeviation,0.5);
    // squaremean /= size;
    // standardDeviation = pow((squaremean - (mean * mean)), 0.5);
    cout << "The Standard Deviation of the Entered Element is : " << (standardDeviation) << endl;
    return 0;
    // cout<<fixed<<setprecision(1)<<standardDeviation<<endl;
    /*setprecision(1)*/
}