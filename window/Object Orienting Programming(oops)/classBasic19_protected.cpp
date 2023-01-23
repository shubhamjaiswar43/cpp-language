#include <iostream>
using namespace std;
class base
{
private:
    int bPrivate;

protected:
    int bProtected;

public:
    int bPublic;
    base() {}
    base(int a, int b, int c)
    {
        bPrivate = a;
        bProtected = b;
        bPublic = c;
    }
    void displayBaseEle(void){
        cout<<"bPrivate : "<<bPrivate<<endl;
        cout<<"bProtected : "<<bProtected<<endl;
        cout<<"bPublic : "<<bPublic<<endl;
    }
};
class derived : public base
{
private:
    int dPrivate;

protected:
    int dProtected;

public:
    int dPublic;
    void setValue(int a,int b,int c,int d,int e){
        bProtected=a;
        bPublic=b;
        dPrivate=c;
        dProtected=d;
        dPublic=e;
    }
    // derived(){}
    void displayDerivedEle(void){
        cout<<"bProtected : "<<bProtected<<endl;
        cout<<"bPublic : "<<bPublic<<endl;
        cout<<"dPrivate : "<<dPrivate<<endl;
        cout<<"dProtected : "<<dProtected<<endl;
        cout<<"dPublic : "<<dPublic<<endl;
    }
};
/*
-------------------------------------------SUMMARY------------------------------------------
--------------------------------------------------------------------------------------------
                    |   Private Derivation  |  Public Derivation  |  Protected Derivation  |
--------------------------------------------------------------------------------------------
1. Private Members  |    Not Inherited      |    Not Inherited    |     Not Inherited      |
2. Public Members   |  Privately Inherited  |  Publicly Inherited |  Protectly Inherited   |
3. Protected Members|  Privately Inherited  | Protectly Inherited |  Protectly Inherited   |
--------------------------------------------------------------------------------------------
*/
int main()
{
    base Base(1,2,3);
    derived Derived;
    Derived.setValue(11,22,33,44,55);
    Base.displayBaseEle();
    Derived.displayBaseEle();//in this bprivate is not occur in derived class ,therefore a garbage value is printed;
    Derived.displayDerivedEle();
    return 0;
}