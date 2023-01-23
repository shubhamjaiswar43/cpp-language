#include<iostream>
using namespace std;

int main()
{
    char name[24];
    int age,type,Exited;
    cout<<"Enter Your Name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>30 || age<18){
        cout<<"Not Applicable for your age"<<endl;
        goto end;
    }
    cout<<"Press 0 for go to school "<<endl<<"And 1 for learn Trading"<<endl;
    cin>>type;
    cout<<"Enter at what age you Exited the course"<<endl<<"(if completed enter 0)"<<endl;
    cin>>Exited;
    switch(type){
    
    case 0:
        if(Exited==0){
            cout<<"The Total Investment Done By Government(for going to school) for "<<name<<" is "<<endl<<100*(30-age)<<endl;
        
        }
        else{
            cout<<"The Total Investment Done By Government(for going to school) for "<<name<<" is "<<endl<<100*(30-Exited)<<endl;
        
        }
        break;
        
    case 1:
        if(Exited==0){
            cout<<"The Total Investment Done By Government(for learning trading) for "<<name<<" is "<<endl<<((2000*(30-age))+(840*(30-age)))<<endl;
        
        }
    
        else{
        cout<<"The Total Investment Done By Government(for learning trading) for "<<name<<" is "<<endl<<((2000*(Exited-age))+(840*(Exited-age)))<<endl;
        
        }
        break;
    
    default:
        cout<<"Invalid"<<endl;
    
    }
    
    
    
    end:
    return 0;
}