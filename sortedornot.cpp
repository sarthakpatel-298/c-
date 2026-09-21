#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int arr[6] = {1,2,3,9,5,6};
    bool isSorted = true;

    for(int i=0; i<5; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }

    return 0;
}