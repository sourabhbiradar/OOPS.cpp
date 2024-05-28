#include <iostream>
using namespace std;

class A{
    public:
      int val = 5; 
      int val2 ;
      
      A(){ // no param
          cout << "constructor called\n";
      }
      
      A(int val2){  // parameterized
          cout << "this ->" << this << endl;
         this -> val2 = val2;  // a.val = a2.val
      }
      
      A(A& temp){   // copy constructor manual
      // warning : when called by value runs in infinite loop
      
          this->val2 = temp.val2;
          cout << "temp.val2 :" << temp.val2 << endl;
      }
  
 };


int main(){
    // constructor
    
    A a(10);
    cout << "address :" << &a <<endl;
    
    A* a1 = new A(3); 
    
    A a2(a);  // copy conts. copy a into a2  // deafult copy const.
  //  a.val = a2.val;
    
    A a3 = a; // manual copy const. 
    // same as A a3(a);
  // default copy dies but both a2 & a3's copy constructor are called after creating manual cc.
}