#include <iostream>
using namespace std;
/*
WAP to declare a class  'Product' having data member as name, price. Accept and display this data for
one object using pointer to thc object(10M).
*/
class Product
{
private:
    string name;
    float price;

public:
    Product() {}
    Product(string name, float price) : name(name), price(price) {}
    void setDetails(string name, float price)
    {
        this->name = name;
        this->price = price;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << "Rs" << endl;
    }
};
int main()
{
    Product *ptr,p("Dairy Milk",20);
    ptr = &p ;
    ptr->display();
    return 0;
}