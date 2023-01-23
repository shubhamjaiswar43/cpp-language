#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is associative array
// it is same as vector but it will save a pair
// it has most function similar to vector
// it also have a function such as 
// "map_name.find(n)" this will return the position of the element(n) if present ,and it can store in the iterator of the map
// if there is no element such as (n) then it will return the position of the end of the map i.e "map_name.end()"
int main()
{
    map<string,int> marksMap;
    marksMap["Ram"]=99;
    marksMap["yash"]=60;
    marksMap.insert({{"Shamu",55},{"Chetan",66}});
    marksMap.insert({"Shahrukh",93});
    marksMap["Shubham"]=98;
    
    //iterating a map
    map<string,int> :: iterator iter;
    cout<<endl<<"Name : Marks"<<endl<<endl;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" : "<<(*iter).second<<endl;
        cout<<(iter->first)<<" : "<<(iter->second)<<endl;

    }

    return 0;
}