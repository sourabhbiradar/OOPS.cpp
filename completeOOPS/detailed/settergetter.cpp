#include <iostream>
using namespace std;

class A{
    // private
 int val1; 
 
     public:
     
          A(int v){
              val1=v;
          }
     
           int getVal1(){    // Getter
           return val1;
           }
 
           void setVal1(int v1){   // Setter
           val1=v1;
           cout << v1 << endl;
           }
};


int main(){
    // getter & setter

    A a;
    
   a.setVal1(10);   // set indirectly
   
   // A a(8); // using param constructor
    
    cout << "getter :" << a.getVal1() <<endl;
    
}