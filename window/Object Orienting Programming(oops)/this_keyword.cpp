#include <iostream>
using namespace std;
//"this" is used to tell the complier that the variable is MemberFunction
//this is a pointer which points to ClassObjects which call the MemberFunction
//it is used when we used same variable as named as memberObjects
class ShopItem
{
public:
    string name;
    float price;
    ShopItem() {}
    // ShopItem(string n, float p) : name(n), price(p){};
    ShopItem(string name,float price){
        // name = name; // this will not set the value of name(member) as name(localVariable)-->(local Variable gets more preference) 
        this->name = name;//Here this is pointing to the class ShopItem
        this->price = price;
    }
    void getDetails(void)
    {
        cout << "Name : " << name << endl
             << "Price : " << price << endl;
    }
};
int main()
{
    int size, i;
    cout << "Enter the No. of Item's in your shop : ";
    cin >> size;
    ShopItem *Items = new ShopItem[size];
    for (i = 0; i < size; i++)
    {
        string name;
        float price;
        cout << "Enter the name of the Item No." << i + 1 << " : ";
        cin >> name;
        cout << "Enter the price of the Item No." << i + 1 << " : ";
        cin >> price;
        Items[i] = ShopItem(name, price);
    }
    // for (i = 0; i < size; i++)
    // {
    //     cout<<endl<<"Name of Item No."<<i+1<<" : "<<Items[i].name
    //     <<endl<<"Price of Item No."<<i+1<<" : "<<Items[i].price<<endl;
    // }
    for (i = 0; i < size; i++)
    {
        cout << endl
             << "Item No." << i + 1 << endl;
        Items[i].getDetails();
    }

    return 0;
}