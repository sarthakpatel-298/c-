#include <iostream>
using namespace std;
int main(){

char vowels[5];

for(char&element:vowels){
   cin>>element;
}

for(int index=0;index<5;index++){
   cout<<vowels[index]<<endl;
}
  return 0;
}
