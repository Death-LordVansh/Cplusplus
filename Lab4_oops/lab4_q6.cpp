#include<iostream>
using namespace std;
class Author {
   private:
      string name;   // to store Author name
   public:
      void setName(string n) {
        name = n;
      }
      string getName() {   // Return name instead of printing
        return name;
      }
};
class Book {
   private:
     string title;   // Book title
  public:
    void setTitle(string t) {
        title = t;
    }
    void display(Author a) {
        cout << "\nAuthor : " << a.getName() << " \tTitle : " << title;
    }
};
int main() {
    Author a1;
    Book b1;
    string a, b;
    cout << "Enter the Author : ";
    cin >> a;
    cout << "Enter the Title : ";
    cin >> b;
    a1.setName(a);     // Set author name
    b1.setTitle(b);    // Set book title
    b1.display(a1);    // Display both together
    return 0;
}