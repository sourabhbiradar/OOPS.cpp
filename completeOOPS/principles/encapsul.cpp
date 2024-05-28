#include <iostream>
#include <string>
using namespace std;

class Abc {
     private : // by default 
     int x;
     
     public :    // methods are public
     void set(int n){
         x=n;
     }
     
     int get(){
         return x;
     }
};
    
int main() {
    // OOPS
    // encapsulation
    
    Abc objA;

//  objA.x=1;   // ERROR : x is private , can NOT access directly.
//  cout << objA.x<<endl; // ERROR : x is private , can NOT access directly

   objA.set(4); // modifying using class method set()
   cout << objA.get() << endl; // access via class method get()
    
   return 0;
}