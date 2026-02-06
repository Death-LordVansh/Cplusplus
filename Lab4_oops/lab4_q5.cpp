#include<iostream>
using namespace std;
class Employee {
   private:
     int empid;      // Employee ID
     float salary;   // Employee salary
   public:
      void setdata(int id, float sal) {
        empid = id;
        salary = sal;
      }
      void showData() {
        cout << "\nEmployee id :" << empid << "\t\t Salary :" << salary;
      }
};
int main() {
    Employee emp[3];   // Array of 3 Employee objects

    // Input data for each employee
    for(int i = 0; i < 3; i++) {
        int a;
        float b;
        cout << "Enter the Employee id :";
        cin >> a;
        cout << "Enter salary :";
        cin >> b;
        emp[i].setdata(a, b);   // Store data in object
    }

    // Display data for each employee
    cout << "\n--- Employee Details ---";
    for(int i = 0; i < 3; i++) {
        emp[i].showData();   // Call showData() for each employee
    }

    return 0;
}