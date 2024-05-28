#include <iostream>
using namespace std;

class A{
    public:
      static char val; // static data member
      
      A(){ 
          cout << "constructor called\n";
      }
      
      ~A(){ 
          cout << "des" << endl;
      }
  
 };

char A :: val= '5'; // init outside class & main()

int main(){
    // static keyword
    
    cout << "A::val :" << A::val << endl; // no need of obj
    
    A a;
    cout << "a.avl :" <<a.val <<endl; // valid bt bad practice
    
    A b;
    b.val = 'b';
    
    cout << "b.avl :" <<b.val <<endl;
     cout << "a.avl :" <<a.val <<endl; // gets updates as there only  one copy.
}