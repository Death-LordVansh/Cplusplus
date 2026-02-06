#include<iostream>
using namespace std;
class Demo {
    private:
        int num;   // Private data member
    public:
        // Function to set the value of num using 'this' pointer
        void set(int num) {
            this->num = num;   // 'this' points to the current object
        }
        // Function to display the value of num
        void show() {
            cout << "The number is: " << num << endl;
        }
};
int main() {
    Demo d1;   // Create object of Demo
    int a;
    cout << "Enter a number : ";
    cin >> a;          // Take input from user
    d1.set(a);         // Store input in object using 'this' pointer
    d1.show();         // Display stored value
    return 0;
}