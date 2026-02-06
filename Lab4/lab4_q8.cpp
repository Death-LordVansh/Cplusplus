#include<iostream>
using namespace std;
class Sample {
   public:
      int x;   // Public data member
};
// Function that accepts Sample object by value , not part of class Sample
void modify(Sample s) {
    cout << "\n[Inside modify()] Original x = " << s.x;
    s.x = 100;   // Modify the copy
    cout << "\n[In modify()] Modified x = " << s.x;
    cout << "\nAddress of object in modify(): " << &s << endl;
}
int main() {
    Sample obj1;     // Create object
    obj1.x = 10;     // Initialize x
    cout << "Before modify(), obj1.x = " << obj1.x;
    cout << "\nAddress of obj1 in main(): " << &obj1 << endl;
    modify(obj1);    // Pass object by value
    cout << "\nAfter modify(), obj1.x = " << obj1.x << endl;
    return 0;
}