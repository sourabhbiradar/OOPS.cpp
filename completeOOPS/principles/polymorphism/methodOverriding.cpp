#include <iostream>
using namespace std;

class Animal{
    public :
     void name(){
         string n = "Tim the tiger";
         cout << "name :" << n <<endl ;
     }
};

class Cub : public Animal{
    public :
      void name(){
          string n="Jim the cub";
          cout<< "name :" << n << endl;
      }
};

int main() {
    // OOPS
    // polymorphism
    // types of polymorphism
    // run time
    // method overriding
    
    Cub c;
    c.name(); // method name from BC overriden by DC
     
  return 0;
}