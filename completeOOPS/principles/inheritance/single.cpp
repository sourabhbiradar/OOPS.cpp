#include <iostream>
using namespace std;

class Parent {
     public : 
     int x;
    
    Parent(){
        cout << "Parent obj p initialized \n";
    }
};

class Child : public Parent {
    public:
    Child (){
        cout << "Child obj c initialized \n";
    }
};
    
int main() {
    // OOPS
    // inheritance
    // types of inheritance
    
    Child c;
    // as class Child inherits Parent ,initilazing Child will also initilaize Parent.
    
    Parent p;
    // only class Parent will be initialized.
    
   return 0;
}