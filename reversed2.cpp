#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int reversed=0;
    while(n>0)
    {
    int lastdigits= n%10;
    reversed = reversed * 10 + lastdigits;
    n=n/10;

    }
      cout<<reversed<<endl;



    return 0;
}