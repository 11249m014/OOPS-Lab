//Q5.A Library stores books with details: title, author, and price. Write a class Book, create objects for two books, and display the details.
#include <iostream>
using namespace std;
class Book {
public:
 string title;
 string author;
 float price;
 void display() {
 cout << " Title: " << title << endl;
 cout << " Author: " << author << endl;
 cout << " Price: Rs." << price << endl;
 }
};
int main() {
 Book b1, b2;
 b1.title = "C++ Programming";
 b1.author = "Bjarne Stroustrup";
 b1.price = 750.50;
 b2.title = "Data Structures";
 b2.author = "Mark Allen Weiss";
 b2.price = 600.75;
 b1.display();
 b2.display();
 return 0;
}
