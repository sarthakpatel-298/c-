#include<iostream>
using namespace std;

int main()
{
  int s=5;
  cout<<sizeof(s)<<endl;

  char name = 'a';
  cout
    <<sizeof('a')<<endl;

    bool flag;
    s==name? flag = true: flag = false;
    cout<<flag<<endl;

    cout<<(&s)<<endl;

    int a=8;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<a--<<endl;
    cout<<--a<<endl;
    return 0;
}