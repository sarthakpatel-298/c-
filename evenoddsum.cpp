#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int arr[6] = {1,2,1,2,1,2};
    int sum=0;

    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            sum = sum + arr[i];
        }
        else{
            sum = sum - arr[i];
        }
    }
    cout<<"sum is "<<sum;
    return 0;
}