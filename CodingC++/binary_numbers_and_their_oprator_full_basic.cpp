#include<iostream>
using namespace std;
//BINARY NUMBERS CONVERSION
/*
    A number x can be convert into
    binary by writing value of x%2
    from right to left until it becomes 1
    ex.
    15==> 15%2=1,7%2=1,3%2=1,1%2=1
    15=1111 (write right to left)
   
    22==> 22%2=0,11%2=1,5%2=1,2%2=0,1%2=1
    22=10110

    A Binary Number x can be convert into
    Decimal by 
    Adding each digit_value*[2 raise (numbers of digit on left side)]
    ex.
    1010= 1*(2³)+0*(2²)+1(2¹)+0(2⁰)=8+0+2+0=10
    1111=1*(2³)+1*(2²)+1*(2¹)+1*(2⁰)=8+4+2+1=15
    10110=1*(2⁴)+0*(2³)+1*(2²)+1*(2¹)+0*(2⁰)=16+0+4+2+0=22
    
*/
int main(){

   /* '~' this is bitwise complement operator
    (~0)=1,(~1)=0"<<endl;
    since it converts the given number
    in binary and then apply changes
    
    eg. (~8)={~(1000)}={0111}=7
    but complier will return (-9)
    bcoz 2's complement of 9 is Binary form of(7)
    [where 2's complement of a number is ~(9)+1
    ~(1001)+1=0110+1=0111=7]
    
    eg.
    ~(11)=~(1011)=0100=4(expected)
    real output=-12
    2's complement of 12 =
    ~(12)+1=~(1100)+1
    =0011+1=0100(binary addition)=
    
    Hence ~(x)=-(x+1)
    */
    
    cout<<"Bitwise Complement operator(~)"<<endl;
    cout<<"[~(4)]= -(4+1) = "<<(~4)<<endl;
    cout<<"[(~22)]= -(22+1) = "<<(~22)<<endl;
    
    
    /* "<<" left shift opertor
    "x<<y" adds y no. of zero adds at 
    right side and 0 at left sides are ignored
    bcoz their existence doesn't effect.
    
    eg. 4<<1=(0100)<<1=(01000=1000)=8
    this means x<<y=x*(2 raise to y)*/
    
    cout<<endl<<endl<<"Left Shift Operator(<<)"<<endl;
    cout<<"4*2^1(4<<1)="<<(4<<1)<<endl;
    cout<<"8*2^2(8<<2)="<<(8<<2)<<endl; //output 32(8*2²)
    
    
    
    /* ">>" right shift opertor
    "x>>y" y no.of digits at right
    sides are eliminated 
    eg. 4>>1=(0100)>>=010=0010=2
    this means x>>y=x/(2 raise to y)*/
    
    cout<<endl<<endl<<"right Shift Operator(>>)"<<endl;
    cout<<"4/(2^1)(4>>1)="<<(4>>1)<<endl;
    cout<<"20/(2^2)(20>>2)="<<(20>>2)<<endl;//output 5(20/4)
    cout<<"52/(2^3)(52>>3)="<<(52>>3)<<endl;//output 6(52/8) 
    //this means it gives only int as output 
    
    
    
    /* "&" bitwise and operator
    work same as and but on bits
    4&7=(0100)&(0111)=4
    0100 &
    0111 
   =0100=4
    */
    
    
    cout<<endl<<endl<<"Bitwise AND Operator (&)"<<endl;
    cout<<"4&7="<<(4&7)<<endl;
    
    
    
    /* "|" bitwise or opertor
    work same as || opertor but on bits
    4|16=(0100)|(10000)
     0100 |
    10000 
   =10100=20
    */

    cout<<endl<<endl<<"Bitwise OR opertor (|)"<<endl;
    cout<<"4|16="<<(4|16)<<endl;
    
    
    
    /* "^" bitwise exclusively or opertor
    work same as negation of double implices
    means if both are same then output=0
    both are different the output=1
    5^11=(0101)^(1011)
    0101 ^
    1011    
   =1110=14
    */
    
    cout<<endl<<endl<<"Bitwise Exclusive OR opertor (^)"<<endl;
    cout<<"5^11="<<(5^11)<<endl;
    
    return 0;
   }