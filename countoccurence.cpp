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

     int occurence=0;
      for(int element: v){
        if(element==x){
            occurence++;
      }
     }
      
     cout<<"occurence of "<<x<<" is "<<occurence;
     return 0;
    }