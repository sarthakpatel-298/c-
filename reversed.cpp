#include <iostream>

int main(){ 
  int num;
  int reversednum=0,reminder;
  
 std::cout <<"enter your number"<<std::endl;
  std::cin>>num;
  do{
      reminder = num % 10;
      
      reversednum = reversednum * 10 + reminder;
      
      num/=10;
      
  }
  
  while(num!=0);
  
  std::cout<<"your number is " << reversednum <<std:: endl;

    return 0;
}