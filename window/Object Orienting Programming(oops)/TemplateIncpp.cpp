#include<iostream>
using namespace std;
/*
TEMPLATE IN CPP IS USED WHEN WE DON'T WANT TO SPECIFY THE DATA_TYPE IN OUR CLASS,
BY USING TEMPLATE WE CAN CREATE CLASS WITH ANY DATA_TYPE(WE CAN ALSO USED CLASS AS A DATA_TYPE IN A TEMPLATE)
WE CAN ALSO TAKE INPUT OF DATA_TYPE MORE THAN ONE
SYNTAX : 
template <class data_type_name,class data_type_name_2,...>              // while making a object of that class we want to specify the data_type
class class_name{

};

//WE CAN ALSO USE THE DEFAULT TYPE OF DATA_TYPE
SYNTAX : 
template <class data_type_name = DATA_TYPE,class data_type_name_2 = DATA_TYPE,...> 
class class_name{

};
*/
template <class data_type,class data_type2>
class Pair{
    public:
    data_type *first = new data_type;
    data_type2 *second = new data_type2;
    Pair(){}
    Pair(data_type first,data_type2 second){
        *(this->first) = first;
        *(this->second) = second;
    }

};
template <class T1 = int ,class T2 = int >
class Customtemplate{
    T1 a;
    T2 b;
    public:
    Customtemplate(){}
    Customtemplate(T1 x,T2 y):a(x),b(y){}
    void display(){
        cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
    }
};
int main()
{
    Pair<int,float> obj(2,59.56521);
    cout<<*obj.first<<" , "<<*obj.second<<endl<<endl;
    Customtemplate<> obj2(2,5);
    obj2.display();
    cout<<endl;
    Customtemplate<char,char> obj3('s','S');
    obj3.display();
    return 0;
}