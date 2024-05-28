#include <iostream>
#include <string>
using namespace std;

class Student { // class name = student
        public:  // to able to access in code ; by default private.
        string name; // property
        int roll_no;    // property
};
    
int main() {
    // OOPS
    // classes & objects
    
    Student student1;  // object
    student1.name = "Sam";
    student1.roll_no = 186;
    
    cout << "name :" << student1.name << " " << student1.roll_no << endl;
    
    // defining/creating object using new()
    Student* student2 = new Student(); // pointer variable to class
    student2->name = "Peter";
    student2->roll_no = 201;
    
    cout << "name :" << student2->name << " " << student2->roll_no << endl;

    return 0;
}