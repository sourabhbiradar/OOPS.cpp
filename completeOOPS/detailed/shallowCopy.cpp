#include <iostream>
using namespace std;

class A{
    public:
      int val ; 
      char *val2;
      
      A(){ 
          cout << "constructor called\n";
          val2 = new char[100]; 
      }
      
     void setV2(char vl2[],int vl){
          val =vl;
          this->val2=vl2;
          cout << "val2 :" << vl2 << endl;
     }
     
     void print(){
         cout << "print val & val2 :" <<val<< " "<< val2 << endl;
     }
  
 };


int main(){
    // constructor
    // shallow & deep copy
    
    A a;
    char v2[6]="value";
    a.setV2(v2,6);
    a.print();
    
    // using default cc 
    // shallow copy
    // if any manual cc comment out otherwise default cc dies
    
    A a2=a; // same as A a1(a)
    a2.print();
    
    a2.val2[0] = 'b'; 
    a2.setV2(v2,8);  
    a.print();  // balue , 6
    a2.print(); // balue , 8  // balue is copied as it is 
    
}