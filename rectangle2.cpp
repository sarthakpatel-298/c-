#include<iostream>
using namespace std;
int main()
{

    int s,p;
    cin>>s>>p;

    for(int i=1;i<=s;i++){
        for(int j=1;j<=p;j++){
            if(i==1 ||i==s || j==1 || j==p)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}