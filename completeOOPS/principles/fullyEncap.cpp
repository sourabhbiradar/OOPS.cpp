#include <iostream>
using namespace std;

// fully encapsulated class
class Student{
    private :
      int vala = 4;
      char valb;
      // all data members are private
      
      public:
      int getVala(){
          return this->vala;
      }
 };

int main(){
    // encapsualtion
    
    Student one;
    cout << one.getVala();
    
}