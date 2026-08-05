#include <iostream>
using namespace std;

int add(int a, int b=4, int c=2) {
    return (a+b+c);

}

int main() {
    cout << add(2, 3, 5) << endl; //10
    cout << add(2, 3) << endl; //5
    cout << add(2) << endl;  //2
    return 0;
}