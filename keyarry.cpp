#include <iostream>
using namespace std;
int main(){

int arr[5] = {2,5,8,3,7};

int key=10;//any key value to search in array
int ans=-1;
for(int i=0;i<5;i++){
    if(arr[i]==key){
        cout<<i<<endl;
        ans=i;
    }
}
cout<<ans<<endl;
   return 0;
}