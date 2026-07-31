#include <iostream>
using namespace std;
int main()
{
    int i;
int n;
std::cin>>n;

int sum=0;

for(i=1;i<=n;i++);

if(i%2==0) {
     sum=sum-i;}

else{
     sum=sum+i; }

std::cout<<sum<<std::endl;

  return 0;
}