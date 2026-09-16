#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"enter x : ";
    int x;
     cin>>x;

    // int occurence=-1;
    // for(int i=0;i<6;i++){
    //    if(v[i]==x){
    //    occurence=i;
    //     }
    // }
    int occurence=-1;
    for(int i=5;i>=0;i--){    
       if(v[i]==x){
       occurence=i;
        }
    }
    cout<<"last occurrence of "<<x<<" is at index "<<occurence<<endl;
}