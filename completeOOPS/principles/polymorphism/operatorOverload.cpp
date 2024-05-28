#include <iostream>
using namespace std;

class Oprtr{
    public:
    int i;
   
    int operator- (Oprtr& obj){
        int val1 = this->i;
        int val2 = obj.i;
        return val1 * val2;   // overload to *
    }
    
    void operator() (){
        cout << "() overloaded " << this->i << endl;
    }
};
int main() {
    // OOPS
    // polymorphism
    // types of polymorphism
    // compile time
    // operator overloading
    
    Oprtr o,o1;
    
    o.i=4; // this-> i =4;
    o1.i=3; // obj.i = 3;
    
   cout<<"operator- overloaded to perform multiplication :"<< o - o1 <<endl; // overload operator
   
   // overloading ()
   o();
   o1();
     
  return 0;
}