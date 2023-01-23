#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"Enter side of the sqaure"<<endl;
    cin>>side;
    for (int i = 0; i <= side; i++)
    {
        for (int j = 0; j <= side; j++)
        {
            if (i==0 || i==side || j==0 || j==side)
            {
                cout<<"* ";
            }
            
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
    


    return 0;
}