#include <iostream>
using namespace std;

class A{
    // properties
 int val1; // 4 bytes
 int val2; // 4 bytea
};

class B{
 // empty class
};

int main(){
    // sizeof()

    A a;
    cout << "sizeof(a) :" <<sizeof(a) << endl; // 8

    B b;
    cout << "sizeof(b) :" <<sizeof(b) << endl;  // 1
    
}