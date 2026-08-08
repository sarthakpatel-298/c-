#include <iostream>
using namespace std;
int main() {

    int arr[] = {1,2,3,4,5,6};

int size = sizeof(arr)/sizeof(arr[0]);
cout<<size<<endl;

  //for loop
for(int ind=0;ind<size;ind++)
{
    cout<<arr[ind]<<endl;
}

   //for each loop
for(int element : arr)
{
    cout<<element <<endl;
}
  //while loop
   int ind=0;
   while(ind<size){
    cout<<arr[ind]<<endl;
    ind++;
   }




     return 0;  
}