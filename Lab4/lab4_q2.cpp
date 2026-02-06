#include<iostream>
using namespace std;
class Number {
  private:
    int value;   // Private data member
  public:
    // Default constructor: initializes value to 10
    Number() {
        value = 10;
    }
    // Function to display the value
    void show() {
        cout << "Value is :" << value << endl;
    }
};
int main() {
    Number n1;
    n1.show();   // Displays initialized value
    return 0;
}