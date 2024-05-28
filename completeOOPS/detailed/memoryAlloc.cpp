#include <iostream>
using namespace std;

class A{
    public:
 int val = 5; 
 };

class B{
    public:
 int val = 10; 
 };

int main(){
    // memory allocation

    A a;  // static allocation
    cout << a.val << endl;
    
    B* b= new B;   // dynamical allocation
    cout << "*b :" << (*b).val << endl;
    
    cout << "b-> :" << b->val << endl;
    
}