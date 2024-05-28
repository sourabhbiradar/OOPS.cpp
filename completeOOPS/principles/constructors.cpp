#include <iostream>
#include <string>
using namespace std;

class Rectangle { 
    public : // access specifier
    int len;
    int b;
    
    Rectangle(){ // default constructor // no params/args
        len=2;
        b=0;
    }
    
    Rectangle(int x,int y){ // parameterised constructor // with param
        len =x;
        b=y;
    }
    
    Rectangle(Rectangle& r){// copy constructor // param = from to copy obj
        len = r.len;
        b=r.b;
    } 
    
};
    
int main() {
    // OOPS
    // constructors
    
     // default 
    Rectangle r1;
    cout << "r1 len & bredth :" << r1.len << " & " << r1.b<<endl;
    
    // parameterised
    Rectangle r2(3,4);
    cout << "r2 len & bredth :" << r2.len << " & " << r2.b<<endl;
    
    // copy 
    Rectangle r3=r2;
    cout << "r3 len & bredth :" << r3.len << " & " << r3.b<<endl;
    
    return 0;
}