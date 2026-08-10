#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector<int> v;
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;

    v.push_back(1); //for inserting an element at the end of the vector
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;
    
    v.resize(5); //for resizing the vector
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;

    v.resize(10);
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;

    v.pop_back(); //for removing the last element of the vector
    v.pop_back();
    cout << "Size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;


    return 0;
}