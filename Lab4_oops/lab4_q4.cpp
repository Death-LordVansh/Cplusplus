#include<iostream>        // Include input-output stream library
using namespace std;      // Use the standard namespace
// Define a class named BankAccount
class BankAccount {
   private:
    double balance;       // Private data member to store account balance
   public:
    // Function to set the balance
    void setBalance(double amount) {
        balance = amount; // Assign parameter 'amount' to balance
    }
    // Function to display the balance
    void getBalance() {
        cout << "Balance :" << balance;
    }
};
int main() {
    BankAccount acc1;     // Create an object 'acc1' of class BankAccount
    double a;             // Variable to store user input
    cout << "Enter balance :"; // Prompt user for balance
    cin >> a;                  // Read balance from user
    acc1.setBalance(a);        // Set balance using user input
    acc1.getBalance();         // Display the balance
    return 0;                  // End of program
}