#include <iostream>
#include <string>
using namespace std;
/*
  Given a string Array .
  print its even-indexed and odd-indexed characters as space-separated strings on a single line.
  Ex. Input: 2
             Hacker
             Rank
      Output:Hce akr
             Rn ak

 */
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout<<"Enter the size of the string array : ";
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the string of index No."<<i<<" : ";
        cin >> s[i];
    }
    cout<<"Output : "<<endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < (s[j].size()); i++)
        {
            if (i % 2 == 0)
            {
                cout << s[j].at(i);
            }
        }
        cout << " ";
        for (int i = 0; i < (s[j].size()); i++)
        {
            if (i % 2)
            {
                cout << s[j].at(i);
            }
        }
        cout << endl;
    }

    return 0;
}
