#include <iostream>
#include <cstring>
using namespace std;

class A{
    public:
      int val ; 
      char *val2;
      
      A(){ 
          cout << "constructor called\n";
          val2 = new char[10]; 
      }
      
      ~A(){ // destructor
          delete val2;  // manual delete
          cout << "des" << endl;
      }
  
 };


int main(){
    // destructor
    
    A a; // static obj
    // when obj a runs out of scope , destructor is called automatically
    
    A *b=new A; // dynamic obj
    delete b; // need to delete obj b manually to call destructor
    
}