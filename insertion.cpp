#include <iostream>
using namespace std;
int main() {

int arr[100], n;

    cout<<"enter your arry size : ";
    cin>>n;

    cout<<"enter your arry elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

 //insertion
     int pos, element ,value;
    cout<<"enter the position for where you want to insert the element: ";
    cin>>pos;

    cout<<"enter the element you want to insert: ";
    cin>>element;

for(int i=n;i>=pos;i--){
    arr[i]=arr[i-1];
}
    arr[pos-1]=element;
    n++;

    cout<<"after insertion the arry is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
   
    }

    return 0;
}