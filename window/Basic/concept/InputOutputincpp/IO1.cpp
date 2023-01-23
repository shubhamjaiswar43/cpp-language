#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
//FILE IS PATTERN OF DATA WHICH IS STORE IN A SECONDARY MEMORY
using namespace std;
/*
fstream is use to open ,read/write and close a file.It provide us a class such as,
1. fstreambase
2. ifstream  -> Derived from fstreambase===============>(us to read the file)=============>(code<--file)flow of data;
3. ofstream  -> Derived from fstreambase===============>(use to overwrite in the file)====>(code-->file)flow of data;

Primarily two types to open a file;
1. by using construtor of the class
---> ofstream stream_objectName(file_name); ====> file_name will open using this
2. by using member function "open()" of the class
==>there is member function eof(){i.e end of file} which will return 0 if file content is end else 1;


*/
int main()
{

    // // this will create the IO1.txt if not exist;
    // string st = "Shubham Bhai";
    // ofstream ioOut("IO1.txt");
    // // this will overwrite the content in the string st;
    // ioOut<<st;
    // ioOut.close();

    // // to read a word from a file
    // string st;
    // ifstream ioIn("IO1.txt");
    // ioIn>>st;
    // cout<<endl<<st;
    // ioIn>>st;
    // cout<<endl<<st;
    // ioIn.close();

    // // read a line from ifstream using a member function getline(object_name,string_name)
    // string st;
    // ifstream ioIn("IO1.txt");
    // getline(ioIn,st);
    // cout<<st;
    // ioIn.close();

    cout << "Answer should not be in one word and write q at end of the answer" << endl;
    ofstream out;
    out.open("introduction.txt");
    string ques[5];
    char ans[25];
    ques[0] = "What is your Name ?\n";
    ques[1] = "Where do you stay ?\n";
    ques[2] = "Information about Education ?\n";
    ques[3] = "Information about family ?\n";
    ques[4] = "Tell about your hobbies ?\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; 1; j++)
        {
            if (j==0)
            {
                cout<<ques[i];
                i==0 ? out<<ques[i]: out<<"\n"+ques[i];
            }
            
            cin >> ans;
            if (strcmp(ans, "q")==0)
            {
                break;
            }
            out<<ans;
            out<<" ";
        }
        out<<"\n";
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     out << ans[i] + "\n";
    // }
    out.close();

    ifstream in;
    in.open("introduction.txt");
    cout<<endl<<endl<<"--------------------INTRODUCTION--------------------"<<endl;
    while (in.eof() == 0)
    {
        string temp;
        getline(in, temp);
        cout<<temp<<endl;
    }
    in.close();
    return 0;
}