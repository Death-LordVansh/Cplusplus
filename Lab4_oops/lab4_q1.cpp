#include<iostream>   // Include the input-output stream library
using namespace std; // Use the standard namespace
class Student{// Define a class named Student
   private :
     int rollNo;  // Private data member to store roll number
     int mark;    // Private data member to store marks
   public :
      void setData(int a,int b){
        rollNo = a;  // Assign parameter 'a' to rollNo
        mark = b;    // Assign parameter 'b' to mark
      }
      void display(){
        cout << "Roll number :" << rollNo << "\t\tMarks :" << mark;
      }
};
int main(){
    Student s1;   // Create an object 's1' of class Student
    int a, b;    
    cout << "Enter Roll number :";
    cin >> a;                      // Read roll number from user
    cout << "Enter the marks :";
    cin >> b;                      // Read marks from user
    s1.setData(a, b);  // Call setData() to assign values to s1
    s1.display();      // Call display() to show student details
    return 0;         
}