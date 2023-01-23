#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("Temp.txt");
    for (int i = 0; i < 10; i++)
    {
        out<<"Hello\n";
    }
    out.close();
    ifstream in;
    in.open("Temp.txt");
    while(in.eof()==0){
        string temp;
        getline(in,temp);
        cout<<temp<<endl;
    }    

    return 0;
}