#include <iostream>
#include <map>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cout<<"Enter the size of the Numbers in the phonebook : ";
    cin>>n;
    map<string,string> phnbook;
    for (int i=0; i<n; i++) {
        string name,num;
        cout<<"Enter the Contact Name of index No."<<i+1<<" : ";
        cin>>name;
        cout<<"Enter the Contact Number of index No."<<i+1<<" : ";
        cin>>num;
        phnbook.insert(pair<string,string>(name,num));
    }
    map<string,string>:: iterator j;
    for (int i=0; i<n; i++) {
        string find;
        cout<<"Enter the Name of the contact to acess the phone number of the contact : ";
        cin>>find;
        j=phnbook.find(find);
        if (j==phnbook.end()) {
            cout<<"Not found"<<endl;
        }
        else{
            cout<<j->first<<" : "<<j->second<<endl;
        }
    }

    // map<int,int> temp;
    // temp.insert(pair<int,int>(1,2));
    // temp.insert(pair<int,int>(2,3));
    // temp.insert(pair<int,int>(3,4));
    // temp.insert(pair<int,int>(4,5));
    // map<int,int>:: iterator i;
    // for ( i = temp.begin(); i !=temp.end();i++)
    // {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    // cout<<endl<<endl;
    // i=temp.begin();
    // cout<<i->first<<" "<<i->second<<endl;
    // i++;
    // cout<<i->first<<" "<<i->second<<endl;
    // i=temp.end();
    // cout<<i->first<<" "<<i->second<<endl;
    // i--;
    // cout<<i->first<<" "<<i->second<<endl;
    
    return 0;
}