#include <iostream>
using namespace std;

class Parent {
    public:
      virtual void colour(){
          cout << "red " << endl;
      }
      void shape(){
          cout << "circle " <<endl;
      }
};

class Child : public Parent{
    public:
     void colour(){
         cout << "Blue" << endl;
     }
     void shape(){
         cout << "cube " <<endl;
     }
};
int main() {
    // OOPS
    // polymorphism
    // types of polymorphism
    // run time
    // virtual methods
    
    Parent* ptr;
    
    Parent p;
    Child c;
    
    ptr=&c;
    
    ptr->colour(); // virtual method 
    ptr->shape();
    
    ptr=&p;
    ptr->colour(); 
    ptr->shape();
    
}