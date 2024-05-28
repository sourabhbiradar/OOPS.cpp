#include <iostream>
using namespace std;

class Parent {
     public : 
     int x;
    
    Parent(){
        cout << "Parent obj p initialized \n";
    }
};

class Child : public Parent {
    public:
    Child (){
        cout << "Child obj c initialized \n";
    }
};

class Grandchild : public Child {
    public:
    Grandchild (){
        cout << "Grandchild obj g initialized \n";
    }
};


    
int main() {
    // OOPS
    // inheritance
    // types of inheritance
    // multi-level
    
    Grandchild g; // Parent ,Child ,Grandchild init
    
    Child c;  // Parent ,Child init
    
    Parent p; // // Parent init
    
    
   return 0;
}