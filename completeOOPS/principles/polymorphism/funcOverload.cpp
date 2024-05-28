#include <iostream>
using namespace std;

class Sum{
   public :
     void add(int x,int y){ // same name in same block
         int sum = x+y;
         cout <<"sum xy :" << sum <<endl;
     }
     void add(int x,int y ,int z){ // same name in same block
         int sum = x+y+z;
         cout << "sum xyz :" << sum <<endl;
     }
     void add(double a,double b){ // same name in same block
         double sum = a+b;
         cout << "sum double :" << sum<<endl;
     }
};


    
int main() {
    // OOPS
    // polymorphism
    // types of polymorphism
    // compile time
    // function overloading
    
    Sum s;
    s.add(3,4); 
    s.add(12,18,10);
    s.add(2.3,2.7);
    // based on args methods are called.
    
  return 0;
}