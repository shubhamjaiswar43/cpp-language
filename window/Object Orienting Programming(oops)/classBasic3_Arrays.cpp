#include<iostream>
#include<string>
using namespace std;
// ------------------------------------------------------------------
// ******************    Using Array in Oops    *********************
// ------------------------------------------------------------------
class shop{
    string itemName[100];
    int itemId[100];
    int itemPrice[100];
    int counter=0;
    public:
    void setPrice(void);
    void display(void);
};
void shop :: setPrice(void){
    cout<<"Enter the item name(for item No."<<counter+1<<"):"<<endl;
    cin>>itemName[counter];
    cout<<"Enter the item Id(for item No."<<counter+1<<"):"<<endl;
    cin>>itemId[counter];
    cout<<"Enter the item Price(for item No."<<counter+1<<"):"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: display(void){
    cout<<endl<<endl;
        cout<<"-------------------------------------------"<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout<<"   "<<itemName[i]<<" with Item Id:"<<itemId[i]<<" is of Rs."<<itemPrice[i]<<"/kg"<<endl;
        cout<<"-------------------------------------------"<<endl;
    }
    
}
int main()
{
    shop rasanshop;
    rasanshop.setPrice();
    rasanshop.setPrice();
    rasanshop.setPrice();
    rasanshop.display();

    return 0;
}