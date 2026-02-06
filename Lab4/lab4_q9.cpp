#include<iostream>
using namespace std;
class Sample {
   public:
      int x;   // Public data member
};
// Function that accepts a pointer to a Sample object
void modifyByAddress(Sample *s) {
    cout << "\n[In modifyByAddress()] Original x = " << s->x;
    s->x = 200;   // Modify using pointer notation
    cout << "\n[Ins modifyByAddress()] Modified x = " << s->x;
    cout << "\nAddress of object in modifyByAddress(): " << s << endl;
}
int main() {
    Sample obj2;     // Create object
    obj2.x = 20;     // Initialize x
    cout << "Before modifyByAddress(), obj2.x = " << obj2.x;
    cout << "\nAddress of obj2 in main(): " << &obj2 << endl;
    // Pass address of obj2 to the function
    modifyByAddress(&obj2);
    // Show that changes affect the original object
    cout << "\nAfter modifyByAddress(), obj2.x = " << obj2.x << endl;
    // Access object data using both object and pointer
    Sample *ptr = &obj2;   // Pointer to obj2
    cout << "\nAccess via object: obj2.x = " << obj2.x;
    cout << "\nAccess via pointer: ptr->x = " << ptr->x << endl;
    return 0;
}