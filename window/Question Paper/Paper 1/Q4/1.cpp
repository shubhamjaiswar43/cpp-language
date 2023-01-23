#include<iostream>
using namespace std;
/*
WAP for class Account with variables acc_no& balance. Accept data for 10 accounts and display
acc_no having balance greater than 5000(05M).
*/
class Account{
    string acc_no;
    float balance;
public:
    void setData(string acc_no,float balance){
        this->acc_no = acc_no;
        this->balance = balance;
    }
    void display(){
        cout<<"Account No. : "<<acc_no<<endl;
        cout<<"Balance : "<<balance<<endl<<endl;
    }
    float rtBal(){
        return balance;
    }
};
int main()
{
    Account acc[10];
    for (int i = 0; i < 10; i++)
    {
        string acc_no;
        float balance;
        cout<<"Enter Account No. and balance ("<<(i+1)<<") : "<<endl;
        cin>>acc_no>>balance;
        acc[i].setData(acc_no,balance);
    }
    cout<<endl<<"Details of Account Having Balance Greater than 5000 : "<<endl<<endl;
    for (int i = 0; i < 10; i++)
    {
        if(acc[i].rtBal()>5000){
            acc[i].display();
        }
    }
    

    return 0;
}