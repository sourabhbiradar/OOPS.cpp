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
      

      
      void setV2(char vl2[],int vl){
          val =vl;
          val2=vl2;
     }
     
     void print(){
         cout << "print val & val2 :" <<val<< " "<< val2 << endl;
     }
  
 };


int main(){
    // constructor
    // copy assignment operator
    
    A a;
    char v2[6]="value";
    a.setV2(v2,6);
    a.print();
    
    A b;
    a=b; // copy assignment operator
    
    // copy & assign b.val into a.val & b.val2 into a.val2
    
    b.print();
    a.print();
    
}