#include <iostream>
#include <vector>
// vectors 
// it is a dynamic arrays in which we can increase the size or decrease the size.
// since,size increase as we increase the size ,but capacity increase in factor of 2 as we increase the size.
// when the size = capacity ,and we insert a element to the vector ,then the same vector copy in other place which (capacity = capacity*2),(size = size+1);
//*************function in vectors**************
// vector_name.push_back(element)        ===> add a element to end
// vector_name.begin()                   ===> return position of 1st element
// vector_name.end()                     ===> return position of last element
// vector_name.size                      ===> return size of vector(size = usedsize)
// vector_name.capacity                  ===> return capacity of vector(capacity = actual size taking in main memory)
// vector_name.resize(element)           ===> change the size of vector without deleting the existing one's.
// vector_name.pop_back                  ===> delete the last element of vector
// vector_name.erase(position)   ===> delete the element of a particular position
// vector_name.clear                     ===> clear all the element from the vector
using namespace std;
int main()
{
    vector<int> v;
    cout << "vector size = " << v.size() << endl;
    cout << "vector capacity = " << v.capacity() << endl;

    for (int i = 0; i < 10; i++)
    {
        int temp;
        cout << "Enter the " << i << " element of dynamic array(vector)" << endl;
        cin >> temp;
        v.push_back(temp);
        cout << "vector size = " << v.size() << endl;
        cout << "vector capacity = " << v.capacity() << endl;
    }
    cout << "vector size = " << v.size() << endl;
    cout << "vector capacity = " << v.capacity() << endl;

    cout << endl
         << endl
         << "Printing element of vector by Normal method" << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "The " << i << " element of dynamic array(vector) is " << v.at(i) << endl;
    }

    cout<<endl<<"Erase last two element";
    v.pop_back();
    v.pop_back();
    cout << endl
         << endl
         << "Printing element of vector by different method" << endl
         << endl;
    for (int ele : v)
    { // another method to print all element of vector
        cout << ele << " ";
    }
    cout<<endl<<"Adding element(99) at 2nd position"<<endl;
    v.insert(v.begin()+2,99);
    cout<<endl<<"Adding element(77) at last 2nd position"<<endl;
    v.insert(v.end()+2,77);
    cout << endl
         << endl
         << "Printing element of vector by using while loop" << endl
         << endl;
    int index=0;
    while (index<v.size())//using while loop
    {
        cout<<v[index++]<<" ";
        // index++;
    }
    
    return 0;
}