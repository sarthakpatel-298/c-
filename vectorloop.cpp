#include<iostream>
#include<vector>
using namespace std;
int main(){
 
    vector<int> v;
    
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        
        //for each loop

        for(int element: v){
            cout<<element<<"  ";
        }
        //while loop

        int idx=0;
        while(idx<v.size()){
            cout<<v[idx]<<" ";
            idx++;
        }

    }
    return 0;
}