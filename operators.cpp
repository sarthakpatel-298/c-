#include<iostream>
using namespace std;

int main()

{
    int num1=3;
    int num2=7;

    cout<<num1+num2<<endl; //10
    cout<<num1-num2<<endl; //-4
    cout<<num1/num2<<endl; //0
    cout<<num1*num2<<endl; //21
    cout<<num1%num2<<endl; //3

     cout<<(num1==num2)<<endl; //false
     cout<<(num1!=num2)<<endl; //true
     cout<<(num1>=num2)<<endl; //false
     cout<<(num1<=num2)<<endl; //true
     
     num1+=3; //6
     num2-=4; //3

     cout<<num1<<endl;
     cout<<num2<<endl;
    return 0;
}