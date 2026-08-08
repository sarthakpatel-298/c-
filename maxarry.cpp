#include <iostream>
using namespace std;
int main(){

int arr[5] ={37,83,92,34,59};
int max=arr[0];

for(int i=1;i<5;i++){

    if(arr[i]>max){

        max=arr[i];
    }
    
}
cout<<"maximum element is "<<max<<endl;

    return 0;
}