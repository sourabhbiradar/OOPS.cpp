#include <iostream>
using namespace std;

class Parent {
     public : 
    
    Parent(){
        cout << "class A \n";
    }
};

class Child1 : public Parent { // Child1 << Parent
    public:
    Child1 (){
        cout << "Child1 << Parent \n";
    }
};

class Child2 : public Parent{  // Child2 << Parent
    public:
    Child2 (){
        cout << "Child2 << Parent \n";
    }
};


    
int main() {
    // OOPS
    // inheritance
    // types of inheritance
    // multiple
    
   Child1 c1; // Parent + Child1
   
   Child2 c2; // Parent + Child2
   
   Parent p;  // Parent
    
    
   return 0;
}