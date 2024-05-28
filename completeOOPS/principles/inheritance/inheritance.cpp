#include <iostream>
using namespace std;

class Parent {
     public : // anywhr in code
     int x;
     
     private : // jst in ths class
     int y;
     
     protected : // in ths class ,parent class & child class
     int z;
};

class Child1 : public Parent{ // public mode of inheritance
  int x; // x remains public
  int y; // y will NOT be accessible
  int z; // z remains protected
};

class Child2 : private Parent{ // private mode of inheritance
 int x; // x becomes private
 int y; // y will NOT be accessible
 int z; // z becomes private
};

class Child3 : protected Parent{
 int x; // x will be protected
 int y; // y will NOT be accessible
 int z; // z will be protected
};
    
int main() {
    // OOPS
    // inheritance
    
    Parent p;
    cout << "public p.x" << p.x << endl;
//   cout << "private p.y" << p.y << endl; // ERROR
//   cout << "protected p.z" << p.z << endl; // ERROR
    
    
   return 0;
}