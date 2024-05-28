#include <iostream>
using namespace std;

class C{
    public:
    virtual ~C(){
        cout << "base des\n";
    }
};

class D:public C{
    public:
   ~D(){
       cout << "Derived des\n";
   } 
};

int main() {
    // virtual destructor
    C* c = new D;
    delete c;
    
    // without Virtual Des only base Des is called
    // with Virtual Des both Des are called
    // indicating all objs are destroyed
    
}