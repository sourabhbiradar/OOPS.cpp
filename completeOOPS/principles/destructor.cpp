#include <iostream>
#include <string>
using namespace std;

class Rectangle { 
    public : 
    int len;
    int b;
    
    Rectangle(){ 
        len=2;
        b=0;
    }
    
    ~Rectangle(){ // destructor
        cout << "Rectangle Destructor "<<endl;
    }
    
};
    
int main() {
    // OOPS
    // destructor
    
    Rectangle* r1 = new Rectangle(); // created
    delete r1; // deleted , destructor will be called
    
    Rectangle r2;  // created
    r2.len=3;
    r2.b=4;
    cout << " r2 created " <<endl;
    // upon finishing execution r2 will be deleted & destructor will be called.
    
   return 0;
}