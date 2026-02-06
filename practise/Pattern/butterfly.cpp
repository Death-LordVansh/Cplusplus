#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter size: ";
    cin >> a;

    // Upper half
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2*(a-i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // Lower half
    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2*(a-i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}