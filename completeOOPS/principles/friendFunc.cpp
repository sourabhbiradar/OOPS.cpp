#include <iostream>
using namespace std;

class A{
    int x;
    
    public :
    A(int a){
        x=a;
    }
    
    friend void get(A &aa);
    
};

void get(A &aa){
    cout << aa.x ;
}

int main() {
    // OOPS
    // friend function 
    
    A aa(3);
    get(aa);
 
}