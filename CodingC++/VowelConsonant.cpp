#include<iostream>
using namespace std;

int main()
{
    char Alphabet;
    cout << "Enter a Alphabet"<<endl;
    cin>>Alphabet;
    switch(Alphabet){
    
        case 'a':
        cout<<"Vowel"<<endl;
        break;
    
        case 'e':
        cout<<"Vowel"<<endl;
        break;
    
        case 'i':
        cout<<"Vowel"<<endl;
        break;
    
        case 'o':
        cout<<"Vowel"<<endl;
        break;
    
        case 'u':
        cout<<"Vowel"<<endl;
        break;

        default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}