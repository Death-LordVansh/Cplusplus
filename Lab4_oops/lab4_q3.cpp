#include<iostream>        // Include input-output stream library
using namespace std;      // Use the standard namespace
class Rectangle {
   private:
    int length;           // Private data member to store length
    int width;            // Private data member to store width
   public:
    int area;
    // Function to set dimensions of the rectangle
    void setDimension(int l, int w) {
        length = l;       // Assign parameter 'l' to length
        width = w;        // Assign parameter 'w' to width
    }
    void calculateArea() {
       area = length * width;   // Area = length × width
    }
    void displayArea() {
        cout << "Area of rectangle is :" << area;
    }
};
int main() {
    Rectangle rec1;       // Create an object 'rec1' of class Rectangle
    int a, b;             // Variables to store user input
    cout << "Enter Length :"; 
    cin >> a;                   // Read length from user
    cout << "Enter width :";
    cin >> b;                   // Read width from user
    rec1.setDimension(a, b);    // Set dimensions using user input
    rec1.calculateArea();       // Calculate area based on dimensions
    rec1.displayArea();         // Display the calculated area
    return 0;                 
}