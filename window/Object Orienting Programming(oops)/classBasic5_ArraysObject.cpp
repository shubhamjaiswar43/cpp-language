#include <iostream>
using namespace std;
// ------------------------------------------------------------------
// *********    Arrays of a Object of a class of Oops    ************
// ------------------------------------------------------------------
class employee
{
    string name;
    int salary;

public:
    void setdata(void)
    {
        cout << "Enter the name of employee" << endl;
        cin >> name;
        cout << "Enter the salary of the of the employee" << endl;
        cin >> salary;
    }
    void getdata(void)
    {
        cout << "The salary of the employee Mr." << name << " is Rs." << salary << endl;
    }
};
int main()
{
    employee myCompany[4];
    for (int i = 0; i < 4; i++)
    {
        myCompany[i].setdata();
        myCompany[i].getdata();
    }

    return 0;
}