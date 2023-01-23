#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){} //if we not create this ,and create a object with not giving any arguments then complier will show error;
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void returnAmount(void);
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
    returnAmount();
}
BankDeposit ::BankDeposit(int p, int y, int r)
{

    principal = p;
    years = y;
    interestRate = ((float)r) / 100;
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
    returnAmount();
}
void BankDeposit:: returnAmount(void)
    {
        if (years == 1 && interestRate > 1)
        {
            cout << endl
                 << "The amount of rupees you will received after you deposit " << principal << "Rs for " << years << " year at Interest Rate " << interestRate << "% is " << returnValue << endl
                 << endl;
        }
        else if (years == 1 && interestRate < 1)
        {
            cout << endl
                 << "The amount of rupees you will received after you deposit " << principal << "Rs for " << years << " year at Interest Rate " << (interestRate * 100) << "% is " << returnValue << endl
                 << endl;
        }
        else if (years != 1 && interestRate < 1)
        {
            cout << endl
                 << "The amount of rupees you will received after you deposit " << principal << "Rs for " << years << " years at Interest Rate " << (interestRate * 100) << "% is " << returnValue << endl
                 << endl;
        }
        else if (years != 1 && interestRate > 1)
        {
            cout << endl
                 << "The amount of rupees you will received after you deposit " << principal << "Rs for " << years << " years at Interest Rate " << interestRate << "% is " << returnValue << endl
                 << endl;
        }
    }
int main()
{
    int p, y, r;
    float R;

    cout << "Enter the value of principal amount ,No. of years and Interest Rate(r>1)" << endl;
    cin >> p >> y >> r;
    BankDeposit b1(p, y, r);

    cout << "Enter the value of principal amount ,No. of years and Interest Rate(r<1)" << endl;
    cin >> p >> y >> R;
    BankDeposit b2(p, y, R);
    BankDeposit b3;         //complier will find construtor for this object and if their is  no (construtor with no arguments) ,then error will occurs;
    return 0;
}