#include <iostream>
using namespace std;
int main()
{

    int range1, range2,s=0;
    cout << "Enter the range" << endl;
    cin >> range1;
    cin >> range2;
    cout <<"The entered range is"<< range1 << "-" << range2<<endl;

    for (int i = range1; i < range2; i++)
    {
        int i2, x = 0;
        i2 = i;
        while (i2 > 0)
        {
            x += ((i2 % 10) * (i2 % 10) * (i2 % 10));
            i2 = i2 / 10;
        }
        if (i == x)
        {
            if(s==0){
                cout<<"The Armstrong Number in the enter range is/are"<<endl;
            }
            cout << x << endl;
            s++;
        }
    }
    if (s==0)
    {
        cout<<"their exist zero Armstrong Number in the entered range"<<endl;
    }
    
    return 0;
}