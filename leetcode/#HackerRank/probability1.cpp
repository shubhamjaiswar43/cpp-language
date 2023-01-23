#include<iostream>
#include<vector>
using namespace std;
/*
There are 3 urns labeled X, Y, and Z.
• Urn X contains 4 red balls and 3 black balls.
• Urn Y contains 5 red balls and 4 black balls.
• Urn Z contains 4 red balls and 4 black balls.

One ball is drawn from each of the 3 urns. What is the probability that, of the 3 balls drawn, 2 are red and 1 is
black?
*/
int main()
{
    char X[]="rrrrbbb",Y[]="rrrrrbbbb",Z[]="rrrrbbbb";
    int count=0,total=0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                if ((X[i]=='r' && Y[j]=='r' && Z[k]=='b') || (X[i]=='b' && Y[j]=='r' && Z[k]=='r') || (X[i]=='r' && Y[j]=='b' && Z[k]=='r'))
                {
                    count++;
                }
                total++;
            }
            
        }
        
    }
    float ans=((float)count/total);
    cout<<"P = "<<count<<" / "<<total<<" = "<<ans<<endl;
    cout<<"The probablity of the given condition is : "<<ans;

    return 0;
}