#include<iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;

   if(age<12)
   {
    cout<<"child"<<endl;
   }
else if(age<12 && age<18)
    {
        cout<<"tenager"<<endl;
    }
else 
{
    cout<<"adult"<<endl;
}

    return 9;
}