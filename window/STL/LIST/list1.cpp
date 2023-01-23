#include<iostream>
#include<list>
using namespace std;
// template <class data_type>
// void display(list<data_type> &lt){
//     list<data_type> *it;
//     for (it=lt.begin(); it!=lt.end(); it++)
//     {
//         cout<<(*it)<<" ";
//     }
//     cout<<endl;
// }
void display(list<int> &lt){
    list<int>::iterator it;
    for (it=lt.begin(); it!=lt.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> lt;
    int size;
    cout<<"Enter the size of the list : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cout<<"Enter "<<i<<" element : ";
        cin>>temp;
        lt.push_back(temp);
    }
    display(lt);

    return 0;
}