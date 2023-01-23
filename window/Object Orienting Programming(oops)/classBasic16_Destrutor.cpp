#include <iostream>
using namespace std;
//--------------------DESTRUTOR-------------------------
// it has name --> ~(class_name)
// it has name --> ~(class_name)
// it is inbuilt in every class
// it will clear the memory use by the object when the function is about to end;
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "We are in construtor for object No." << count << endl;
    }
    ~num()
    {
        cout << "We are in destrutor for object No." << count << endl;
        count--;
    }
};
int num:: count;
int main()
{
    cout << "We are in main" << endl;
    num n1;
    {
        cout << "Entering in Block" << endl;
        num n2, n3;
        cout << "Exiting in Block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}