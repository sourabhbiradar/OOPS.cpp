#include <iostream>
using namespace std;

class A {
     public : 
    
    A(){
        cout << "class A \n";
    }
};

class B {
    public:
    B (){
        cout << "class B \n";
    }
};

class C : public A ,public B {  // inheriting class A & B (can be even mor)
    public:
    C (){
        cout << "class C << class A & B \n";
    }
};


    
int main() {
    // OOPS
    // inheritance
    // types of inheritance
    // multiple
    
    C c; // all 3 init as it has inherited both
    
    A a; // only A
    B b; // only B
    
    
   return 0;
}